#include <stdio.h>
int find_element ( int arr[], int n, int key);
/**
 * @arr:arrays to be deleted
 * @n: size of array
 * @key: element to be deleted
 *Description: It passes key to find function to check if its available
 * deletes element and shifts the array
 * Return: deleted array
*/

int delete_element ( int arr[], int n, int key)
{
	int pos = find_element (arr, n , key);
	if (pos == -1)
	{
		printf("\nElement not found");
		return n;
	}
	int n;
	for ( i = pos; i < n-1; i++)
		arr[i] = arr[i+1];
	return n-1;
}
/**
 *  @arr: list of array to find
 * @n:  size of array
 * @key: element to find
 * Description: This funtion searches if the element to be deleted
 * is found within the array
 * Return: -1 if false, 1 if element is is in array
*/
int find_element ( int arr[], int n, int key)
{
	int i;
	for ( i =0; <n; i++)
	{
		if ( arr[i] = key)
			return 1;
	}
	return -1;
}
/**
 * @arr: declaration of array
 * @key: Element to be deeted
 * Descripton:Main function declares array and pasees it to 
 * delete function to be deleted, prints elements before and 
 * after deletion
 *Return: 0
 */
int main()
{
	int arr[12] = {12,12,32,43, 30, 45};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 30, i;
	printf ( \n"elements before deletion");
	for ( i = 0; i < n; i++)
		printf("%d ", arr[i]);
	n = delete_element( arr, n , key);
	printf("\n After deletion");
	for ( i =0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
