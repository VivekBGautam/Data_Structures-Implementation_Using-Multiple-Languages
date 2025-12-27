# Doubly_Circular_Linked_List (C++)

This repository contains a **Doubly Circular Linked List** implementation in **C++ language**. It is designed for learning and practicing **Data Structures** concepts such as pointers, dynamic memory allocation, and circular linked list operations using object-oriented programming.

A doubly circular linked list is a collection of nodes where:

* Each node stores **data**
* Each node contains a pointer to the **next node**
* Each node contains a pointer to the **previous node**
* The last node points to the **first node**
* The first node points to the **last node**

---

##  Data Structure Used

```cpp
struct node
{
    int data;
    node *next;
    node *prev;
};
```  

## Operations Implemented
Insert node at first position

Insert node at last position

Insert node at given position

Delete node from first position

Delete node from last position

Delete node from given position

Display all elements (circular traversal)

Count number of nodes

## How to Compile and Run

g++ Filename.cpp -o Myexe

./Myexe

## Concepts Covered
Dynamic memory allocation (new, delete)

Pointers and structures

Object Oriented Programming (OOP)

Circular doubly linked list traversal

Linear data structures

## Author
Vivek B. Gautam

Email: vivekbgautam@gmail.com

GitHub: https://github.com/viivekbgautam

⭐ If you find this repository helpful, consider giving it a star!
