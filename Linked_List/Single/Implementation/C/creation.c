#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	int data;
	struct node *next;
};

void main()
{
	// pointer of head to store first node
	int choice, i = 1;
	struct node *head, *newNode, *temp;
	head = NULL;

	while (choice)
	{
		// allocate memory for node
		newNode = (struct node*)malloc(sizeof(struct node));

		// user for data
		printf("Enter data to insert: ");
		scanf("%d", &newNode->data);

		newNode->next = NULL;
		if (head == NULL)
			head = temp = newNode;
		else
		{
			temp->next = newNode;
			temp = newNode;
		}

		// continue to create another node
		printf("\nDo you want to insert another node: ");
		scanf("%d", &choice);
	}

	// Traverse List
	temp = head;
	while (temp != NULL)
	{
		printf("\nThe value of node %d is: %d",i, temp->data);
		temp = temp->next;
		i++;
	}
	getchar();
}
