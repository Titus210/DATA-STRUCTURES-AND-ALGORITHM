#include <stdio.h>
#include <stdlib.h>

// create a student structure
struct Student
{
    int reg_no;
    struct Student *next;
};

/**
 * @brief print the linked list
 *
 * @param last: item pointing to first element of the list and holds data of the last element of the list
 */
void print_list(struct Student *last)
{
    // check if the list is empty
    if (last == NULL)
    {
        printf("\nThe list is empty.");
        return;
    }

    // create temporary pointer
    struct Student *temp = last->next;

    // iterate through the circular list
    do
    {
        printf("\n%d", temp->reg_no);
        temp = temp->next;
    } while (temp != last->next);
}

void begin_insertion(struct Student **last)
{
    // check if its empty
    if (*last == NULL)
    {
        // alocate memory for new node
        struct Student *new_student = (struct Student *)malloc(sizeof(struct Student));
        // check if memory allocation was successfull
        if (new_student == NULL)
        {
            printf("\nCould not allocate the memory: ");
            return;
        }

        // take data from user and insert it to the node
        printf("\nEnter student's id: ");
        scanf("%d", &new_student->reg_no);

        // make last to point to new node
        *last = new_student;
        (*last)->next = *last;
    }
    else
    {
        // if its not empty
        // allocate memory for new node
        struct Student *new_student = (struct Student *)malloc(sizeof(struct Student));
        if (new_student == NULL)
        {
            printf("\nCould not allocate the memory: ");
            return;
        }
        new_student->next = (*last)->next;
        (*last)->next = new_student;
    }
}
void between_nodes(struct Student **last)
{
    int choice;
    printf("Enter position to insert the data: ");
    scanf("%d", &choice);

    struct Student *temp = (*last)->next;

    if (temp == NULL)
    {
        begin_insertion(last);
        return;
    }

    if (temp->reg_no == choice)
    {
        struct Student *new_student = (struct Student *)malloc(sizeof(struct Student));
        printf("\nEnter registration number: ");
        scanf("%d", &new_student->reg_no);

        new_student->next = temp->next;
        temp->next = new_student;

        if (temp == *last)
            *last = new_student;

        return;
    }
    while (temp->next != (*last)->next && temp->next->reg_no != choice)
    {
        temp = temp->next;
    }

    if (temp->next->reg_no == choice)
    {
        struct Student *new_student = (struct Student *)malloc(sizeof(struct Student));
        printf("\nEnter registration number: ");
        scanf("%d", &new_student->reg_no);

        new_student->next = temp->next;
        temp->next = new_student;

        if (temp == *last)
            *last = new_student;
    }
    else
    {
        printf("Position not found in the list.");
    }
}

/**
 * @brief insertion lined list 
 * 
 * @param last 
 */
void end_insertion(struct Student **last)
{
    struct Student *temp = (*last)->next;

    if (temp == NULL)
    {
        begin_insertion(last);
        return;
    }

    // create new node
    struct Student *new_student = (struct Student*)malloc(sizeof(struct Student));

    new_student->next = (*last)->next;
    (*last)->next = new_student;
    *last = new_student;
}
int main()
{
    struct Student *last = NULL;
    begin_insertion(&last);
    print_list(last);
    between_nodes(&last);
    print_list(last);
}