#include <stdio.h>

#define MAX 6
int main(){
	int array[MAX];
	int pos, i;

	// initialize array with 0
	for( i = 0; i <= MAX; i++){
		array[i] = 0;
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
	// if pos > 0 and pos < array size

	// Loop Through array and Increment

	// shift Each element to left 

	// print array after
	return 0;

}
