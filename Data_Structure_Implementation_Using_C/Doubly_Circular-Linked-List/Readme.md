# Doubly_Circular-Linked-List (C)

This repository contains a Doubly Circular Linked List implementation in C language.
It is designed for learning and practicing Data Structures concepts such as pointers, dynamic memory allocation, and circular bidirectional traversal.

A doubly circular linked list is a collection of nodes where:

Each node stores data

Each node contains a pointer to the next node

Each node also contains a pointer to the previous node

The last node’s next points to the first node

The first node’s prev points to the last node

There is no NULL pointer in the list

## Data Structure Used
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

## Operations Implemented

Insert node at first position

Insert node at last position

Insert node at given position

Delete node from first position

Delete node from last position

Delete node from given position

Display all elements (Forward traversal)

Display all elements (Backward traversal)

Count number of nodes

Search element (First / Last Occurrence)

## How to Compile and Run

gcc Filename.c -o Myexe

./Myexe

## Concepts Covered

Dynamic memory allocation (malloc, free)

Pointers and structures

Call by address

Circular doubly linked list traversal

Linear data structures

## Author

Vivek B. Gautam

📧 Email: vivekbgautam@gmail.com

🌐 GitHub: https://github.com/viivekbgautam

⭐ If you find this repository helpful, consider giving it a star!
