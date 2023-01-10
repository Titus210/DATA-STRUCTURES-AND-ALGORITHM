#include <stdio.h>

#define MAX 5

void main()
{
    // initialize array, position, i
    int array[MAX] = {1, 2, 3, 4, 5}, element;
    int i = 0;
    int pos = 0; // since beginning is index 0

    // input element to store from user
    printf("Enter element to insert into array: ");
    scanf("%d", &element);

    // loop through array and shift elements to last index
    for (i = MAX; i > pos; i--)
    {
        array[i] = array[i + 1];
    }
    // insert element
    array[pos] = element;

    // print the array which is now size +1

    for (i = 0; i <= MAX; i++)
    {
        printf("%d \n", array[i]);
    }
}
