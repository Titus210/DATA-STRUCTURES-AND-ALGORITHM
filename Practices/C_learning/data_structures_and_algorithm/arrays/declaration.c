#include <stdio.h>
#include <stdlib.h>
/**
  * @arr[]: Takes aray from main function
  * @key: Element to be searched
  * @n: size of array
  * Return: i if true else -1
*/
int find_Element(int arr[], int key, int n)
{
	int i;
	for (i = 0; i <= n; i++)
	{
		if (arr[i] == key)
			return i;
		else
			return -1;
	}
/* main function */
int main()
{
	int arr[] = {1,2,23,23,43,54,7};
	int key = 43;
	int n = sizeof(arr) / sizeof(arr[0];
	int positon = find_Element(arr, n, key);
	if (position == -1)
		printf("Element not found)\n");
	else
		printf("Element found at position:%d", position +1);
	return 0;
}
