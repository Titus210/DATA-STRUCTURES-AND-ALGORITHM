#include <stdio.h>

#define MAX 10;

int main()
{
    int students[MAX] = {1, 2, 3, 4, 5, 6}, element;
    int i, pos;

    // get elements from user to insert
    printf("Enter Element to insert: ");
    scanf("%d", &element);

    // get position to insert
    printf("Enter Position to insert: ");
    scanf("%d", &pos);

    // check if position is greater than number
    if (pos >= MAX)
    {
        printf("Invalid position");
        return -1;
    }

    // shift elements to make room for new
    for (i = MAX - 1; i > pos; i--)
    {
        students[i] = students[i - 1];
    }

    // insert elements
    students[pos] = element;

    // print array of students
    for (i = 0; i < MAX; i++)
    {
        printf("Student at index %d is %d\n", i, students[i]);

        return 0;
    }