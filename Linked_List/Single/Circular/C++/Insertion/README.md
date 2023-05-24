# Circular Single linked list insertion
***
## Introduction
The circular singly linked list is a type of linked list in which the `last` node of the list points back to the first node, creating a loop. In this README, we will discuss the algorithm for inserting elements at the beginning of a circular singly linked list and provide a code implementation in C++.

## Overview
The circular singly linked list allows efficient traversal from any node to any other node in the list. Inserting an element at the beginning of the list involves creating a new node, updating the links between nodes, and updating the `last` pointer to point to the new node.

## Algorithm
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

## Time complexity 
The time complexity of inserting an element at the beginning of a circular singly linked list is O(1) since it involves constant-time operations.

## Summary
In this README, we discussed the algorithm for inserting elements at the beginning of a circular singly linked list. We provided a code implementation in C++ to demonstrate the insertion process. <br/>


The code implementation includes functions for printing the items in the linked list and inserting a node at the beginning. An example usage scenario is provided to demonstrate the functionality of the code.  <br/>

The time complexity of inserting an element at the beginning of a circular singly linked list is O(1), as it requires constant-time operations regardless of the size of the list. 
 <br/>

In conclusion, the circular singly linked list is a useful data structure that enables efficient traversal and insertion operations. The provided code implementation can serve as a starting point for working with circular singly linked lists in C++. <br/>


## Author
This README was written by [Titus Kiplagat]. Feel free to contact me at [linkedIn](https://www.linkedin.com/in/titus-kiplagat-5146ba210/) for any further clarifications or suggestions.