#include <stdio.h>
/**
 * @arr: elements to be inserted
 * @n: size of array
 * @x: position to be inserted
 * @pos: position to be inserted
 */
void insert_random( int arr[], int n , int x, int pos)
{
	for (i = n-1; i>=pos; i--)
		arr[i+1] = arr[i];
	arr[pos] = x;
}
int main()
{
	int arr[10] = {2,4,23,45,43,43}
	printf("before insertion\n");
	for ( i =0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	int x = 10, pos = 2;
	insert_random(arr, n, x, pos);
	n++;
	printf("\nAfter insertion\n");
	for ( i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
