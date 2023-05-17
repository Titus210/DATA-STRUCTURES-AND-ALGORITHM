#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

/**
 * @brief prints linked list items
 * 
 * @param p: this is pointer to the passed structure node 
 */
void printLinkedList(struct node *p)
{
    while (p != NULL){
        cout << p->data << endl;
        p = p->next;
    }
}


/**
 * @brief initializes the linked list
 * 
 * @return int 
 */
int main()
{
    int n;
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // allocate memory to the struct
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));

    // assign values to the structures
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // link the nodes
    one->next = two;

    // printing node values
    head = one;
    printLinkedList(head);
    return 0;
}