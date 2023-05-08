#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    stack<string> undo_stack;
    stack<string> redo_stack;
    string current_text = "";
    string command;

    cout << "Welcome to the text editor!" << endl;

    while(true){
        cout << "Current text" << current_text << endl;
        cout << "Enter Command (Type help to see command list): " << endl;
        getline(cin, command);

        if (command == "help")
        {
            cout << "Commands:" << endl;
            cout << "type 'insert' to insert new text" << endl;
            cout << "type 'undo' to undo last change" << endl;
            cout << "type 'redo' to redo undone change" << endl;
            cout << "type 'quit' to quit" << endl;
        }
        else if (command == "insert"){
            string new_text;
            cout << "Enter new text" << endl;
            getline(cin, new_text);
            undo_stack.push(current_text);
            current_text += new_text;
        }
        else if (command == "undo")
        {
            if(undo_stack.empty())
            cout << "Nothing to undo" << endl;
            else{
                redo_stack.push(current_text);
                current_text = undo_stack.top();
                undo_stack.pop();
            }
        }
        else if (command == "redo"){
            if(redo_stack.empty())
                cout << "Nothing to redo" << endl;
            else
            {
                undo_stack.push(current_text);
                current_text = redo_stack.top();
                redo_stack.pop();
            }
        }
        else if(command == "quit"){
            break;
        }
        else{
            cout <<"Invalid command. Type 'help' for commands" << endl;
        }
    }
    cout << "Exiting text editor. Final text: " << current_text << endl;


}