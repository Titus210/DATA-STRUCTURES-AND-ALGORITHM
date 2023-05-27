#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

/**
 * @brief printing items in a linked list
 *
 * @param node: this is the node to print
 */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        cout << node->data << "--> ";
        node = node->next;
    }
    cout << endl;
}

/**
 * @brief Inserting items to the beginning of a linked list
 *
 * @param head_ref : this is the reference to the head of the list
 * @param new_data : this is the new data to be inserted into the linked list
 */
void beginningInsertion(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}


/**
 * @brief This is a function to insert code at a given position
 *
 * @param head_ref :  head node that contains first node of the list
 * @param new_data : data to be inserted to the list
 * @param pos : position to insert the
 */
void insertion_at_given_pos(struct Node **head_ref, int new_data, int pos)
{
    // Check if position is valid
    if (pos < 0)
    {
        cout << "Invalid position" << endl;
        return;
    }

    // Allocate memory for the new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL)
    {
        cout << "Memory allocation failed!" << endl;
        return;
    }

    // Store data in the new node
    new_node->data = new_data;

    // If position is zero, insert at the beginning
    if (pos == 0)
    {
        new_node->next = (*head_ref);
        (*head_ref) = new_node;
        return;
    }

    // Traverse to (pos-1) node
    struct Node *current = (*head_ref);
    int count = 0;
    while (current != NULL && count < pos - 1)
    {
        current = current->next;
        count++;
    }

    // If position is greater than size or invalid, display an error message
    if (current == NULL)
    {
        cout << "Cannot insert at this position" << endl;
        free(new_node); // Free the allocated memory
        return;
    }

    // Insert the new node at the given position
    new_node->next = current->next;
    current->next = new_node;
}


/**
 * @brief main driver function to perform operations on the list
 *
 * @return int
 */

int main()
{
    struct Node *head = NULL;

    // beginning insertion
    beginningInsertion(&head, 3);
    beginningInsertion(&head, 2);
    beginningInsertion(&head, 1);

    // end insertion
    endInsertion(&head, 4);

    // insert at given position
    insertion_at_given_pos(&head, 20, 0); // insert at the beginning
    printList(head);
    insertion_at_given_pos(&head, 20, 3); // insert at the a valid pos
    printList(head);
    insertion_at_given_pos(&head, 20, 10); // insert at an invalid pos
    printList(head);

    cout << "After deletion" << endl;
    deleteNode(&head, 3);
    printList(head);
    deleteNode(&head, 1);
    printList(head);

    return 0;
}
