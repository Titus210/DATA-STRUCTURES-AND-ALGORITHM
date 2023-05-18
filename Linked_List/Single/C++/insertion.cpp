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
 * @brief inserts data to the end of the node
 * 
 * @param head_ref : head of the new node
 * @param new_data : the data to be inserted at the end
 */
void endInsertion(struct Node **head_ref, int new_data)
{

    // allocate memory
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last_element_pointer = *head_ref;

    // store data
    new_node->data = new_data;
    new_node->next = NULL; // make the last node point to null

    // check if node has no items
    if (*head_ref == NULL)
    {
        *head_ref = new_node; // point head to new_node
        return;
    }

    while (last_element_pointer->next != NULL)
        last_element_pointer = last_element_pointer->next; // increment last node pointer to the last element

    last_element_pointer->next = new_node; // pointer to last element to point to new node
    return;
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

        printList(head);

    return 0;
}
