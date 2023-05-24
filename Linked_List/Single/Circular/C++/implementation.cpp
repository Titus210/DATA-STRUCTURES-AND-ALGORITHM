#include <iostream>
using namespace std;


struct Node
{
    int data;
    struct Node *next;
};

void printLinkedList(struct Node *head)
{
    struct Node *current = head;

    if (head == NULL)
    {
        cout << "Linked list is empty." << endl;
        return;
    }

    do
    {
        cout << current->data << endl;
        current = current->next;
    } while (current != head);
}

int main()
{
    // Initialize nodes
    struct Node *head = NULL;
    struct Node *last = NULL;
    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;

    // Allocate memory
    one = (struct Node *)malloc(sizeof(struct Node));
    two = (struct Node *)malloc(sizeof(struct Node));
    three = (struct Node *)malloc(sizeof(struct Node));

    // Assign values
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = one;

    // Set head and last node
    head = one;
    last = three;

    // Print values
    printLinkedList(head);

    // Free allocated memory
    free(one);
    free(two);
    free(three);

    return 0;
}


