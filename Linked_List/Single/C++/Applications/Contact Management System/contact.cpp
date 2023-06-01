#include <iostream>
#include <regex>
#include <string>
#include <limits>

using namespace std;

struct Contact
{
    string name;
    int phone;
    string email;
    string address;
    Contact *next;
};

void add_contact(Contact **head_ref)
{
    regex name_regex("^[a-zA-Z]+(([',. -][a-zA-Z ])?[a-zA-Z]*)*$");
    regex phone_regex("^[0-9]{10}$");
    regex email_regex("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$");
    regex address_regex("^[a-zA-Z0-9+_.-]+$");

    Contact *new_contact = new Contact();
    if (new_contact == nullptr)
    {
        cout << "Memory allocation failed!" << endl;
        return;
    }

    cout << "Enter name: ";
    getline(cin, new_contact->name);

    while (!regex_match(new_contact->name, name_regex))
    {
        cout << "Invalid name. Please enter a valid name: ";
        getline(cin, new_contact->name);
    }

    string phone_str;
    cout << "Enter Phone number: ";
    getline(cin, phone_str);

    while (!regex_match(phone_str, phone_regex))
    {
        cout << "Invalid phone number. Please enter a valid phone number: ";
        getline(cin, phone_str);
    }
    new_contact->phone = stoi(phone_str);

    cout << "Enter email address: ";
    getline(cin, new_contact->email);

    while (!regex_match(new_contact->email, email_regex))
    {
        cout << "Invalid email address. Please enter a valid email address: ";
        getline(cin, new_contact->email);
    }

    cout << "Enter address: ";
    getline(cin, new_contact->address);

    while (!regex_match(new_contact->address, address_regex))
    {
        cout << "Invalid address. Please enter a valid address: ";
        getline(cin, new_contact->address);
    }

    new_contact->next = nullptr;

    if (*head_ref == nullptr)
    {
        *head_ref = new_contact;
    }
    else
    {
        Contact *temp = *head_ref;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new_contact;
    }

    cout << "Contact added successfully" << endl;
}

void delete_name(Contact **head_ref, string *name_delete)
{
    // check if name is in front of the list
    if ((*head_ref)->name == *name_delete)
    {
        Contact *temp = *head_ref;
        *head_ref = (*head_ref)->next;
        delete temp;
        return;
    }
    // loop till the last element to check if item is in list
    Contact *temp = *head_ref;
    while (temp->next != NULL)
    {
        if (temp->next->name == *name_delete)
        {
            Contact *temp2 = temp->next;
            temp->next = temp->next->next;
            delete temp2;
            return;
        }
        temp = temp->next;
    }
}

void delete_phone(Contact **head_ref, int *phone_no_delete)
{
    if ((*head_ref)->phone == *phone_no_delete)
    {
        Contact *temp = *head_ref;
        *head_ref = (*head_ref)->next;
        delete temp;
        return;
    }
    Contact *temp = *head_ref;
    while (temp->next != NULL)
    {
        if (temp->next->phone == *phone_no_delete)
        {
            Contact *temp2 = temp->next;
            temp->next = temp->next->next;
            delete temp2;
            return;
        }
        temp = temp->next;
    }
}

void delete_email(Contact **head_ref, string *email_delete)
{
    if ((*head_ref)->email == *email_delete)
    {
        Contact *temp = *head_ref;
        *head_ref = (*head_ref)->next;
        delete temp;
        return;
    }
    Contact *temp = *head_ref;
    while (temp->next != NULL)
    {
        if (temp->next->email == *email_delete)
        {
            Contact *temp2 = temp->next;
            temp->next = temp->next->next;
            delete temp2;
            return;
        }
        temp = temp->next;
    }
}

void delete_contact(Contact **head_ref)
{
    int choice = 0; // Initialize the choice variable

    // get what option to delete
    cout << "What do you want to delete?" << endl;
    do
    {
        cout << "1. Phone number" << endl;
        cout << "2. Email" << endl;
        cout << "3. Address" << endl;
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore remaining characters in input buffer
    } while (choice < 1 || choice > 3);

    string searchValue;
    bool found = false;

    switch (choice)
    {
    case 1:
        cout << "Enter phone number to delete: ";
        getline(cin, searchValue);
        break;
    case 2:
        cout << "Enter email to delete: ";
        getline(cin, searchValue);
        break;
    case 3:
        cout << "Enter address to delete: ";
        getline(cin, searchValue);
        break;
    default:
        cout << "Invalid choice" << endl;
        return;
    }

    Contact *current = *head_ref;
    int position = 1;

    while (current != nullptr)
    {
        if (choice == 1 && to_string(current->phone) == searchValue)
        {
            found = true;
            break;
        }
        else if (choice == 2 && current->email == searchValue)
        {
            found = true;
            break;
        }
        else if (choice == 3 && current->address == searchValue)
        {
            found = true;
            break;
        }
        current = current->next;
        position++;
    }

    if (found)
    {
        switch (choice)
        {
        case 1:
            delete_phone(head_ref, &(current->phone));
            break;
        case 2:
            delete_email(head_ref, &(current->email));
            break;
        case 3:
            delete_name(head_ref, &(current->name));
            break;
        default:
            break;
        }
        cout << "Contact deleted successfully" << endl;
    }
    else
    {
        cout << "Contact not found" << endl;
    }
}

void search_contact(Contact **head_ref)
{
    int choice = 0; // Initialize the choice variable

    // get what option to search
    cout << "What do you want to search?" << endl;
    do
    {
        cout << "1. Phone number" << endl;
        cout << "2. Email" << endl;
        cout << "3. Address" << endl;
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore remaining characters in input buffer
    } while (choice < 1 || choice > 3);

    string searchValue;
    bool found = false;

    switch (choice)
    {
    case 1:
        cout << "Enter phone number to search: ";
        getline(cin, searchValue);
        break;
    case 2:
        cout << "Enter email to search: ";
        getline(cin, searchValue);
        break;
    case 3:
        cout << "Enter address to search: ";
        getline(cin, searchValue);
        break;
    default:
        cout << "Invalid choice" << endl;
        return;
    }

    Contact *current = *head_ref;
    int position = 1;

    while (current != nullptr)
    {
        if (choice == 1 && to_string(current->phone) == searchValue)
        {
            found = true;
            break;
        }
        else if (choice == 2 && current->email == searchValue)
        {
            found = true;
            break;
        }
        else if (choice == 3 && current->address == searchValue)
        {
            found = true;
            break;
        }
        current = current->next;
        position++;
    }

    if (found)
    {
        cout << "Contact found at position " << position << ":" << endl;
        cout << "Name: " << current->name << endl;
        cout << "Phone: " << current->phone << endl;
        cout << "Email: " << current->email << endl;
        cout << "Address: " << current->address << endl;
    }
    else
    {
        cout << "Contact not found" << endl;
    }
}

void display_contact(Contact **head_ref)
{
    cout << "Displaying contacts in Contact book" << endl;
    Contact *temp = *head_ref;

    while (temp != nullptr)
    {
        cout << "Name: " << temp->name << endl;
        cout << "Phone: " << temp->phone << endl;
        cout << "Email: " << temp->email << endl;
        cout << "Address: " << temp->address << endl;
        cout << "-----------------------------------" << endl;
        temp = temp->next;
    }
}

int menu()
{
    int choice;
    do
    {
        cout << "Enter an operation to perform" << endl;
        cout << "1. Add contact" << endl;
        cout << "2. Delete contact" << endl;
        cout << "3. Search contact" << endl;
        cout << "4. Display contact" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore remaining characters in input buffer
    } while (choice < 1 || choice > 5);
    return choice;
}

void prompt(int choice)
{
    static Contact *head = nullptr;

    // Prompt functions
    switch (choice)
    {
    case 1:
        add_contact(&head);
        break;
    case 2:
        delete_contact(&head);
        break;
    case 3:
        search_contact(&head);
        break;
    case 4:
        display_contact(&head);
        break;
    case 5:
        cout << "Exiting contact book" << endl;
        break;
    }
}

int main()
{
    int choice;
    do
    {
        choice = menu();
        prompt(choice);
    } while (choice != 5);

    return 0;
}
