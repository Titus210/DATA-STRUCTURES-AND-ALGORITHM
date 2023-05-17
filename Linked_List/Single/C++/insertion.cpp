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
        cout << node->data << " ";
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
 * @brief main driver function to perform operations on the list
 * 
 * @return int 
 */

int main()
{
    struct Node *head = NULL;

    beginningInsertion(&head, 3);
    beginningInsertion(&head, 2);
    beginningInsertion(&head, 1);

    printList(head);

    return 0;
}
