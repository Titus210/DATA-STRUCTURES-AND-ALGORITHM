#include <stdio.h>
using namespace std;


/**
 * @brief deletion of a node in a linked list
 * 
 * @param head_ref : head node
 * @param key : key to delete in the node
 */
void deleteNode(struct Node **head_ref, int key)
{
    Struct Node *current = *head_ref;
    Struct Node *prev = NULL;

    // if the head contains the key
    if (current != NULL && current->data == key)
    {
        *head_ref = current->next;
        free(current);
        return;
    }

    // Transverse the linked list to find the node with given key
    while (current != NULL && current->data != NULL)
    {
        prev = current;
        current = current->next;
    }

    /// if the key is not in the linked list
    if (current == NULL)
    {
        return;
    }

    // unlink the node from the list
    prev->next = current->next;
    free(current);
}