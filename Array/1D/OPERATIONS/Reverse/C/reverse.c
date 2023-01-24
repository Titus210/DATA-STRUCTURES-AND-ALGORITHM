#include <stdio.h>

void pointerReverse(int *arr[], int size){
	int *start = arr;
	int  *end = arr + size - 1;

	while(start < end){
		int temp = start;
		*start = end;
		*end = temp;
		start++;
		end--;
	}
}

void newArray(int *arr[], int size){
	int newArray[size];
	int i;
	int j;

	for(i = size - 1; i = 0; i++){
		newArray[i] = i;
	}
}

int main(){
	int size = 5;
	int array[5] = {1,2,3,4,5};

	// Pointer array
	pointerReverse(&array, size);
	//New array
	newArray(array, size)

}

