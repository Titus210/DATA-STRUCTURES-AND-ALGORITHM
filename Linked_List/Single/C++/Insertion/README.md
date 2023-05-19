# Header Insertion in Linked List

## Introduction
The purpose of this README is to provide an overview of header insertion in a linked list. It explains the different types of insertion and provides algorithms for each type.

## Types of Insertion
1. Beginning Insertion
2. Insertion at Given Position
3. Insertion at the End

## Algorithm for Beginning Insertion
To perform beginning insertion in a linked list, follow these steps:
1. Allocate memory for a new node.
2. Assign the new data to the data field of the new node.
3. Set the next pointer of the new node to the current head of the linked list.
4. Update the head pointer to point to the new node.

## Algorithm for Insertion at Given Position
To perform insertion at a given position in a linked list, follow these steps:
1. Check if the given position is valid. If it is less than 0, display an error message and return.
2. Allocate memory for a new node.
3. Assign the new data to the data field of the new node.
4. If the given position is 0, perform beginning insertion.
5. Otherwise, traverse the linked list to the (pos-1)th node.
6. If the given position is greater than the size of the linked list or invalid, display an error message, free the allocated memory, and return.
7. Insert the new node at the given position by updating the next pointers.

## Algorithm for Insertion at the End
To perform insertion at the end of a linked list, follow these steps:
1. Allocate memory for a new node.
2. Assign the new data to the data field of the new node.
3. Set the next pointer of the new node to NULL.
4. If the linked list is empty, set the head pointer to the new node.
5. Otherwise, traverse the linked list to the last node and update its next pointer to point to the new node.

## Time Complexity
The time complexity for each type of insertion is as follows:

| Type of Insertion         | Time Complexity |
|---------------------------|-----------------|
| Beginning Insertion       | O(1)            |
| Insertion at Given Position | O(pos)          |
| Insertion at the End      | O(n)            |

Here, pos represents the position of insertion and n represents the number of nodes in the linked list.

## Conclusion
This README provided an overview of header insertion in a linked list. It explained the different types of insertion, along with their algorithms and time complexity. By following these algorithms, you can effectively perform header insertion in a linked list based on the given requirements.

## Author
This README was written by [Titus Kiplagat]. Feel free to contact me at [linkedIn](https://www.linkedin.com/in/titus-kiplagat-5146ba210/) for any further clarifications or suggestions.
