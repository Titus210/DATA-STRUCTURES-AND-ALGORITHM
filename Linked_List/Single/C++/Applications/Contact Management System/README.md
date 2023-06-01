# Contact Management system

***

## Introduction

The Contact Book Application is a command-line program built using C++ that allows users to manage their contacts. It provides various operations such as adding contacts, deleting contacts, searching for contacts, and displaying contacts.

## Overview

The Contact Book Application provides a user-friendly interface for storing and retrieving contact information. Users can store details like name, phone number, email address, and physical address for each contact. The application allows users to perform operations such as adding new contacts, deleting existing contacts, searching for specific contacts, and displaying all contacts.

## How to use

To use the Contact Book Application, follow these steps:

1. Compile and run the C++ code provided in the repository.
2. Upon starting the program, you will see a menu with different options.
3. Choose an operation by entering the corresponding number from the menu.
4. Follow the prompts to perform the selected operation. For example, to add a contact, enter the contact details as requested.
5. After completing an operation, you will be returned to the main menu to choose another option.
6. To exit the application, select the "Exit" option from the menu.

## How the contact books work

The Contact Book Application operates by utilizing a linked list data structure to store the contact information. Each contact is represented by a node in the linked list, containing fields for name, phone number, email address, and physical address.

Here is a brief introduction of each

### Adding a Contact

1. Allocate memory for a new contact node.
2. Prompt the user to enter the contact details (name, phone number, email address, and physical address).
3. Validate the entered data according to specific rules (e.g., using regular expressions).
4. Add the new contact to the end of the linked list.

### Deleting a Contact

1. Prompt the user to select the type of contact information to delete (phone number, email address, or physical address).
2. Depending on the selection, prompt the user to enter the corresponding information for the contact to be deleted.
3. Search the linked list for a contact that matches the entered information.
4. If a matching contact is found, remove it from the linked list.
5. If no matching contact is found, display a "not found" message.

### Searching for a Contact

1. Prompt the user to select the type of contact information to search for (name, phone number, email address, or physical address).
2. Depending on the selection, prompt the user to enter the corresponding information to search.
3. Search the linked list for a contact that matches the entered information.
4. If a matching contact is found, display the contact details.
5. If no matching contact is found, display a "not found" message.

### Displaying Contacts

1. Traverse the linked list and display the details of each contact.
2. Display the contact details in a formatted manner for better readability.

## Programming Methodology Used

The Contact Book Application is implemented using the following programming methodologies:

1. Object-Oriented Programming (OOP): The contact details are encapsulated in a struct, and operations are implemented as functions that manipulate the contact struct and the linked list.
2. Modular Programming: The code is organized into separate functions for each operation, promoting code reuse and maintainability.
3. Error Handling: Input validation is performed using regular expressions to ensure the entered data is in the correct format.
4. Memory Management: Memory allocation and deallocation are handled appropriately to avoid memory leaks.

## Algorithms of Each Function

Here are the algorithms for each function in the Contact Book Application:

### Adding a Contact

1. Create a new contact node and allocate memory for it.
2. Prompt the user to enter the contact details.
3. Validate the entered data.
4. If the linked list is empty, set the new node as the head of the linked list.
5. Otherwise, traverse the linked list to find the last node.
6. Set the next pointer of the last node to the new node.

### Deleting a Contact

1. Prompt the user to select the type of contact information to delete.
2. Prompt the user to enter the corresponding information.
3. Search the linked list for a contact that matches the entered information.
4. If a matching contact is found, remove it from the linked list.
5. If no matching contact is found, display a "not found" message.

### Searching for a Contact

1. Prompt the user to select the type of contact information to search for.
2. Prompt the user to enter the corresponding information.
3. Search the linked list for a contact that matches the entered information.
4. If a matching contact is found, display the contact details.
5. If no matching contact is found, display a "not found" message.

### Displaying Contacts

1. Traverse the linked list starting from the head.
2. For each node, display the contact details.

### Time complexities

Here is a table showing the time and space complexities of each operation in the Contact Book Application:

| Operation              | Time Complexity | Space Complexity |
|------------------------|-----------------|------------------|
| Adding contact         | O(1)            | O(1)             |
| Deleting contact       | O(n)            | O(1)             |
| Searching for contact  | O(n)            | O(1)             |
| Displaying Contacts    | O(n)            | O(1)             |

## Conclusion

The Contact Book Application provides a convenient way to manage contact information. It allows users to add, delete, search for, and display contacts efficiently. By using a linked list data structure and appropriate algorithms, the application ensures optimal performance for contact operations.

## Author
Incase of any questions, feel free to reach out to me via the following platforms:
[Email](mailto:tituskiplagat50@gmail.com)
[Titus Kiplagat](https://www.linkedin.com/in/titus-kiplagat-5146ba210/)
