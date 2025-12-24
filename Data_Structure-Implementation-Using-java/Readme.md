# Data_Structure-Implementation-Using-java

## Singly Linear | Singly Circular | Doubly Linear | Doubly Circular

This repository contains complete implementations of four types of Linked Lists in Java, designed for learning and practicing Data Structures and Algorithms using object-oriented programming concepts.

The project focuses on understanding dynamic memory allocation, node connections, and list traversal techniques.

## Types of Linked Lists Included
1️⃣ Singly Linear Linked List
2️⃣ Singly Circular Linked List
3️⃣ Doubly Linear Linked List
4️⃣ Doubly Circular Linked List

 ## What is a Linked List?

A Linked List is a dynamic data structure made up of nodes, where:

Each node stores data

Nodes are connected using references (links)

Memory is allocated dynamically

Efficient insertion and deletion operations are possible

## 1. Singly Linear Linked List
Characteristics

Each node contains:

Data

Reference to the next node

The last node points to null

Traversal is one-directional

Use Case

Simple dynamic lists

Stack and queue implementations

## 2. Singly Circular Linked List
Characteristics

Each node contains:

Data

Reference to the next node

The last node points back to the first node

No null reference in the list

Use Case

Circular buffers

Continuous looping structures

## 3. Doubly Linear Linked List
Characteristics

Each node contains:

Data

Reference to the next node

Reference to the previous node

First node’s previous is null

Last node’s next is null

Traversal is bidirectional

Use Case

Navigation systems

Undo / Redo operations

## 4. Doubly Circular Linked List
Characteristics

Each node contains:

Data

Reference to the next node

Reference to the previous node

Last node’s next points to the first node

First node’s previous points to the last node

No null references

Use Case

Advanced scheduling systems

Circular navigation structures

## Common Class Structure
🔸 node Class

Represents a single node in the linked list.

Data Members

int data – Stores node data

node next – Reference to next node

node prev – Reference to previous node (for doubly lists)

🔸 Linked List Classes

Each linked list type has its own implementation class:

SinglyLL

SinglyCL

DoublyLL

DoublyCL

## Common Operations Implemented
### Operation           ###	Description

InsertFirst(int no)	Insert node at beginning

InsertLast(int no)	Insert node at end

InsertAtPos(int no, int pos)	Insert node at specific position

DeleteFirst()	Delete first node

DeleteLast()	Delete last node

DeleteAtPos(int pos)	Delete node at specific position

Display()	Display all elements

Count()	Return total number of nodes

 ## Sample Output
| 11 | -> | 21 | -> | 51 | -> null
Total node in linked list are : 3

| 11 | <-> | 21 | <-> | 51 | <-> (Back to First)
Total node in linked list are : 3

## Outcomes

Understanding internal working of linked lists

Difference between linear and circular lists

Difference between singly and doubly linked lists

Efficient insertion and deletion techniques

Applying OOP principles in Java

Building strong foundation for DSA interviews

## How to Run

Compile

javac Filename.java


Run

java Filename

## Author

Vivek Bhauraj Gautam

 Email: Vivekbgautam@gmail.com

 GitHub: https://github.com/Vivekbgautam
