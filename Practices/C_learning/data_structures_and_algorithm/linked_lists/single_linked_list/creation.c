#include <stdio.h>
#include <sdlib.h>
/* 
  * Implementation of structure
*/
struct Node {
	int data;
	srtuct node* next;       /*Pointer to next node */
};

/* MAin function*/
int main()
{
	struct Node* node_3 = NULL;
	struct Node* node_2 = NULL;
	struct Node node_1 = NULL;

/** Allocating memoty for each node in head */
	node_1 = (struct Node*)malloc(sizeof(struct Node));
	node_2 = (struct Node*)malloc(sizeof(struct Node));
	node_3 = (struct Node*)malloc(sizeof(struct Node));

	node_1->data = 1;    /* Assigning data */
	node_2->next = node_2;  /*Pointer set to node 2*/

	node_2->data = 2;      /* Assign data */
	node_2->next = node_3;  /*Pointer links to node 3*/

	node_3->data = 3; /* Assign data to node 3*/
	node_3->next = NULL;   /* Pointer set to null */

	return 0;
}


