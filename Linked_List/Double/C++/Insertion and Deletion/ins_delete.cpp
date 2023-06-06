#include <iostream>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
};

void prompt_menu(int *choice)
{
    do
    {
        cout << "What operation do you want to perform?" << endl;
        cout << "1. Insertion" << endl;
        cout << "2. Deletion" << endl;
        cout << "3. Searching" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> *choice;
    } while (*choice < 1 || *choice > 4);
}

void insertion(struct Node **head)
{
    // allocation of memory
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // check if allocation has failed
    if (new_node == nullptr)
    {
        cout << "Memory allocation failed" << endl;
        return;
    }
    // insert data to the node
    cout << "Enter data to insert" << endl;
    cin >> new_node->data;

    // insertion at the begining of an empty list
    if ((*head) == nullptr)
    {
        new_node->next = (*head); // point next to head which is nullptr
        new_node->next = nullptr;
        (*head) = new_node;
    }
    else
    {
        // insertion at the begining in a non empty list
        new_node->next = (*head); // point next of newnode to head i.e point to first element in list
        new_node->prev = nullptr;

        (*head)->prev = new_node; // point previous of next node to new node that is second node to point to first(new node)
        (*head) = new_node;       // make head to point to the first element
    }
    cout << "Item inserted" << endl;
}

void deletion(struct Node **head)
{
}

void searching(struct Node **head)
{
}

void display(struct Node **head)
{
}

void exit_program()
{
}

int main()
{
    Node *head = nullptr; // Initialize head to nullptrptr

    int choice = 0;
    prompt_menu(&choice);
    cout << "Choice: " << choice << endl;
    switch (choice)
    {
    case 1:
        insertion(&head);
        break;
    case 2:
        deletion(&head);
        break;
    case 3:
        searching(&head);
        break;
    case 4:
        display(&head);
        break;
    case 5:
        exit_program();
        break;
    default:
        cout << "Enter a valid choice" << endl;
        main();
        break;
    }
    return 0;
}
