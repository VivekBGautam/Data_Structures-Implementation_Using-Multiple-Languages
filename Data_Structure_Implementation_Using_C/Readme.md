# Data_Structure_Implementations-Using- (C)

This repository contains multiple Linked List implementations in C language, designed for learning and practicing Data Structures and Algorithms.
Each linked list demonstrates different pointer relationships, traversal techniques, and memory management concepts.

## Types of Linked Lists Implemented

### Singly Linear Linked List

A collection of nodes where:

Each node stores data

Each node points to the next node

The last node points to NULL

###  Singly Circular Linked List

A collection of nodes where:

Each node stores data

Each node points to the next node

The last node points back to the first node

There is no NULL pointer

### Doubly Linear Linked List

A collection of nodes where:

Each node stores data

Each node points to the next node

Each node points to the previous node

First node’s prev is NULL

Last node’s next is NULL

### Doubly Circular Linked List

A collection of nodes where:

Each node stores data

Each node points to the next node

Each node points to the previous node

Last node’s next points to the first node

First node’s prev points to the last node

There is no NULL pointer

## Data Structures Used

###Singly Linked List Node
struct node
{
    int data;
    struct node *next;
};

### Doubly Linked List Node
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

## Common Operations Implemented

✔ Insert node at first position

✔ Insert node at last position

✔ Insert node at given position

✔ Delete node from first position

✔ Delete node from last position

✔ Delete node from given position

✔ Display all elements

✔ Count number of nodes

✔ Search element (First / Last Occurrence)

(Forward and backward traversal included where applicable)

## How to Compile and Run

gcc Filename.c -o Myexe

./Myexe

## Concepts Covered

Dynamic memory allocation (malloc, free)

Pointers and pointer-to-pointer

Structures in C

Call by address

Linear and circular data structures

Forward and backward traversal

## Author

Vivek B. Gautam

 Email: vivekbgautam@gmail.com

 GitHub: https://github.com/viivekbgautam

⭐ If you find this repository helpful, consider giving it a star!
