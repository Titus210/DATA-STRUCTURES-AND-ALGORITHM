# Circular Single Linked List Insertion
---

## Introduction
The circular singly linked list is a type of linked list in which the `last` node of the list points back to the first node, creating a loop. In this README, we will discuss the algorithm for inserting elements at the beginning and the end of a circular singly linked list and provide a code implementation in C++.

## Overview
The circular singly linked list allows efficient traversal from any node to any other node in the list. Inserting an element at the beginning or the end of the list involves creating a new node, updating the links between nodes, and updating the `last` pointer accordingly.

## Algorithm for Beginning Insertion
1. Check if the `last` item in the list is equal to NULL.
2. If the `last` item is NULL:
    - Allocate memory for a new node.
    - Assign the data to the new node.
    - Create a link by setting the `next` pointer of the new node to itself.
    - Update the `last` pointer to point to the new node.
3. If the `last` item is not NULL:
    - Allocate memory for a new node.
    - Assign the data to the new node.
    - Link the new node with the first node by setting its `next` pointer to the `next` pointer of the `last` node.
    - Update the `next` pointer of the `last` node to point to the new node.
    - Update the `last` pointer to point to the new node.

## Algorithm for End Insertion
1. Check if the list is empty by verifying if the `last` item is equal to NULL.
2. If the list is empty:
    - Allocate memory for a new node.
    - Assign the data to the new node.
    - Create a link by setting the `next` pointer of the new node to itself.
    - Update the `last` pointer to point to the new node.
3. If the list is not empty:
    - Allocate memory for a new node.
    - Assign the data to the new node.
    - Store the address of the head node in the new node's `next` pointer.
    - Point the `next` pointer of the `last` node to the new node.
    - Make the new node the last node by updating the `last` pointer.

## Time Complexity
The time complexity of inserting an element at the beginning or the end of a circular singly linked list is O(1) since it involves constant-time operations.

## Summary
In this README, we discussed the algorithms for inserting elements at the beginning and the end of a circular singly linked list. We provided a code implementation in C++ to demonstrate the insertion processes.

The code implementation includes functions for printing the items in the linked list, inserting a node at the beginning, and inserting a node at the end. Example usage scenarios are provided to demonstrate the functionality of the code.

The time complexity of inserting an element at the beginning or the end of a circular singly linked list is O(1), as it requires constant-time operations regardless of the size of the list.

In conclusion, the circular singly linked list is a useful data structure that enables efficient traversal and insertion operations. The provided code implementation can serve as a starting point for working with circular singly linked lists in C++.

## Author
This README was written by [Titus Kiplagat](https://www.linkedin.com/in/titus-kiplagat-5146ba210/). Feel free to contact me at LinkedIn for any further clarifications or suggestions.
