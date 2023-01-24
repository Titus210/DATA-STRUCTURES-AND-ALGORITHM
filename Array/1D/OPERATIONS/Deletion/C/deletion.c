#include <stdio.h>

#define MAX 6
int main(){
	int array[MAX];
	int pos, i;
	int j = 0;

	// initialize array with 0
	for( i = 0; i <= MAX; i++){
		array[i] = j;
		j++;
	}

	// print array before deletion
	printf("The array before insertion is: \n");
	for( i = 0; i <= MAX; i++){
		printf("\nArray at Index %d is %d", i, array[i]);
	}

	// Ask user for position to delete
	printf("\nEnter Position to delete");
	scanf("%d",&pos);
	// Check position of Array
	if ( pos < 0 || pos >= MAX)
	{
		printf("Invalid Position");
			return -1;
	}

	// Loop Through array and Increment
	for(i = pos; i < MAX + 1; i++){
		array[i] = array[i + 1];
	}

	// print array after insertion
	printf("The array after insertio  is: \n");
	for(i = 0; i <= MAX; i++){
		printf("\nArray at index %d is %d", i, array[i]);
	}

	return 0;

}
