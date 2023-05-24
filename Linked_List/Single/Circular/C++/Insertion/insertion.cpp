#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

/**
 * @brief prints items in the linked list
 * 
 * @param last: -This is the pointer to last element in the list
 */
void print_list(struct Node* last){
    if (last == NULL){
        cout << "Circular linked list is empty." << endl;
        return;
    }

    struct Node* current = last->next;

    do{
        cout << current->data << " ";
        current = current->next;
    } while(current != last->next);

    cout << endl;
}

/**
 * @brief inserts mode at the begining of the linked list
 * 
 * @param last: -This is the pointer to last element in the list
 * @param data: - The data to be inserted to the linked list
 * @return struct Node* 
 */
struct Node* beginning_insertion(struct Node* last, int data){
    // check if last item is equal to NULL
    if (last == NULL){
        // allocate memory for new node
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

        // assign data to new node
        new_node->data = data;

        // create link
        new_node->next = new_node;

        // update last to point to new node
        last = new_node;

        return last;
    }

    // allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // assign data to new node
    new_node->data = data;

    // link new node with the first node
    new_node->next = last->next;

    // update last to point to new node
    last->next = new_node;

    return last;
}

/**
 * @brief Inserts node at the end of the linked list
 * 
 * @param last: - This is the pointer to the last element in the list
 * @param data: - The data to be inserted into the linked list
 * @return struct Node* 
 */
struct Node* end_insertion(struct Node* last, int data){
    // check if the list is empty
    if(last == NULL){
        // allocate memory for the new node
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        if(new_node == NULL){
            printf("Memory allocation failed.\n");
            return last;
        }

        // assign data to the new node
        new_node->data = data;

        // create link
        new_node->next = new_node;

        // update last to point to new node
        last = new_node;

        return last;
    }

    // allocate memory for the new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if(new_node == NULL){
        printf("Memory allocation failed.\n");
        return last;
    }

    // assign data to the new node
    new_node->data = data;

    // link new node with the first node
    new_node->next = last->next;

    // update last to point to new node
    last->next = new_node;

    // make new node the last node
    last = new_node;

    return last;
}

/**
 * @brief entry point for the insertion code
 * 
 * @return int 
 */
int main(){
    struct Node* last = NULL;

    last = beginning_insertion(last, 12);
    last = beginning_insertion(last, 34);
    last = beginning_insertion(last, 56);

    print_list(last);


    last = end_insertion(last, 12);
    if(last == NULL)
        return 1;

    last = end_insertion(last, 34);
    if(last == NULL)
        return 1;

    last = end_insertion(last, 56);
    if(last == NULL)
        return 1;

    print_list(last);

    // Free allocated memory
    struct Node* current = last->next;
    while(current != last){
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
    free(last);

    return 0;

}
