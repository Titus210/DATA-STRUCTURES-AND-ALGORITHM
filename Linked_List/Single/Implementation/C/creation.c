#include <stdio.h>

struct singly{
	int data;
	struct singly *next;
};

int node* getNode(){
	node* newNode;
	newNode = (node*)malloc(sizeof(node));

	printf("Enter data to store: ");
	scanf("%d",&newNode -> data);

	newNode -> next = NULL;
	return newNode;
}

int main(){
	print("%d",getNode());
	return 0;
}
