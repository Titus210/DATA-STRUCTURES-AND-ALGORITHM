#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct node
{
    int data;
    struct node *next;
};

void insertLinkedList(struct node **head, int data, int position)
{
    struct node *p, *q;
    // create a new node
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Sorry we cannot allocate the memory \n");
        return;
    }

    /* Insert at the begining */
    if (position == 1)
    {
        // assign data to new node
        new_node->data = data;
        // make new node to point to head
        new_node->next = (*head);
        // make head to point to new node
        (*head) = new_node;
    }
    else{

    }
}

void printList(struct node *head)
{

    while (head != NULL)
    {
        printf("%d -->", head->data);
        head = head->next;
    }
    printf(" NULL\n");
}

int main()
{

    // create a head pointer
    struct node *head = NULL;
    insertLinkedList(&head, 12, 1);
    insertLinkedList(&head, 14, 1);
    insertLinkedList(&head, 16, 1);

    printList(head);
}