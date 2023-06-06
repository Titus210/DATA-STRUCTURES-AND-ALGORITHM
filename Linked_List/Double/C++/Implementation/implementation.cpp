#include <iostream>
using namespace std;

struct node
{
    struct node *prev; // pointer of previous element in the list
    int data;
    struct node *next; // pointer of next element in the list
};
int main()
{
    /* initialize nodes*/
    struct node *head; // head node
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    /* assign data to values*/
    one->data = 1;
    two->data = 2;
    three->data = 3;

    /* connect nodes*/
    head = one; // head to point to first node

    /* next of first node to point to two and prev to point to null*/
    one->next = two;
    one->prev = NULL;

    /* next of second node to point to third node and previous to point to first node*/
    two->next = three;
    two->prev = one;

    /* next of third node to point to NULL and prev to point to second node*/
    three->next = NULL;
    three->prev = two;

    
}
