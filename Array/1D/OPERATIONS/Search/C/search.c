#include <stdio.h>

// search code
int Search(int array[],  int data,)
{
    for (int i = 0; i < array.length; i++)
    {
        if (data == array[i])
        {
            printf("%d is found at index %d\n", array[i], i);
        }
        else
        {
            printf("Data not found");
        }
    }
}
// main code

int main()
{
    // declare and initialize array
    int sortedArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int unsortedArray[10] = {2, 4, 1, 3, 5, 7, 8, 9, 10, 6};
    int item, loc;

    // prompt user to enter element to be searched
    printf("Enter element to be searched\n");
    scanf("%d", &item);

    // initialize location to -1 array index
    loc = -1;

    // ask user to choose which is to be searched
    do
    {
        printf("Which array do you want to search: \n1.Sorted \n2.Unsorted\n");
        scanf("%d", &option);
    } while (option <= 2 || option >= 1);

    // switch to function depending on choice
    if (option == 1)
        Search(sortedArray, item);
    elsif(option == 2)
        Search();
    else main(unsortedArray, item);
}