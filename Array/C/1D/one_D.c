#include <stdio.h>

#define MAX 5
// implementing one dimensional array

void main()
{
    // variables declaration
    int arr[MAX], i;
    // inserting elements into array
    for (i <= 0; i <= MAX - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    // printing elements in array
    for (i = 0; i < MAX; i++)
    {
        printf("Element at index %d is: %d\n", i, arr[i])
    }
}