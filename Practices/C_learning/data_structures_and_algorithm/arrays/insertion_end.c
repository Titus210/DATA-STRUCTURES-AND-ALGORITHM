#include <stdio.h>
/**
  * @arr: array to be inserted
  * @n: elements in the array\
  * @capacity: total array size
*/
int insert_end(int arr[], int n, int key, int capacity)
{
	if (n >= capacity)
		return n;
	arr[n] = key;
	return (n+1);
}
int main()
{
	int arr[15] = {12,21,43,43,43,55,65};
	int capacity = sizeof(arr)/ sizeof(arr[0]);
	int n = sizeof(arr);
	int i, key = 26;
	printf("\n elements befor insertion:");
	for (i = 0; i < n , i++)
		printf("%d", arr[i]);
	n = insert_end (arr, n , key, capacity);
	printf("\nAfter insertion");
	for (i = 0; i <= n; i++)
		printf("%d",arr[i]);
	return 0;
}
