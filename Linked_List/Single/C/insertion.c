#include <stdio.h>
#include <stdlib.h>

// Structure to hold student details
struct Student
{
    int student_id;
    struct Student *next;
};

void print_list(struct Student *head)
{
    // create temporary pointer
    struct Student *temp = head;

    while (temp != NULL)
    {
        printf("\n%d", temp->student_id);
        temp = temp->next;
    }
}

void insertion(struct Student **head)
{
    // create a new student node
    struct Student *new_student = (struct Student *)malloc(sizeof(struct Student));

    // check if memory allocation is successful
    if (new_student == NULL)
    {
        printf("\nMemory allocation failed.");
        return;
    }

    // ask user for student's id
    printf("\nEnter Student id number: ");
    scanf("%d", &new_student->student_id);

    // make student point to null
    new_student->next = NULL;

    // check if node is empty
    if (*head == NULL)
    {
        *head = new_student; // point head to new student
    }
    else
    {
        // create a temporary pointer to traverse the list
        struct Student *temp = *head;

        // traverse to the last node
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        // point the next of temp to new node
        temp->next = new_student;
    }
}

int main()
{
    // create head structure
    struct Student *head = NULL;

    char choice;
    do
    {
        insertion(&head);

        printf("\nDo you want to insert another element? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("\nList of students:\n");
    print_list(head);

    return 0;
}
