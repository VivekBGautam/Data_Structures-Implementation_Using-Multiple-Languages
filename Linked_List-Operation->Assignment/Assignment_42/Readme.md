# Assignment_42

This repository Contains My Assignment Question i mearge question in one file in assending order so in program42_5.c
All funtion present
---

## Features Implemented

* Insert node at the beginning
* program42_1.c  ->  Search **first occurrence** of an element
* program42_2.c  ->  Search **last occurrence** of an element
* program42_3.c  ->  Calculate **sum of all elements**
* program42_4.c  ->  Find **maximum element** in the list
* program42_5.c  ->  Find **minimum element** in the list

---

## Concepts Used

* Structures
* Pointers & Double Pointers
* Dynamic Memory Allocation (`malloc`)
* Traversal of Linked List
* Modular Programming
* Defensive Programming (return `-1` for invalid cases)

---

## Data Structure Used

```
struct node
{
    int data;
    struct node *next;
};
```

---

## Functions Overview

| Function Name      | Description                         |
| ------------------ | ----------------------------------- |
| `InsertFirst()`    | Inserts a new node at the beginning |
| `SearchFirstOcc()` | Returns index of first occurrence   |
| `SearchLastOcc()`  | Returns index of last occurrence    |
| `Addition()`       | Returns sum of all nodes            |
| `FindMax()`        | Returns maximum element             |
| `FindMin()`        | Returns minimum element             |

---

## How to Compile & Run

```
gcc Filename.c -o Myexe
./Myexe
```

---

## Sample Output

```
program42_1.c  ->  51 occurs at index number : 1
program42_1.c  ->  Last occurrence of 51 is at index : 1
program42_1.c  ->  Addition of members of total linked list is : 184
program42_1.c  ->  Max number from linked list is  : 101
program42_1.c  ->  Min number from linked list is  : 11
```

---

## Assignment Structure

```
📁 Assignment_42
 ├── program42_1.c
 ├── program42_2.c
 ├── program42_3.c
 ├── program42_4.c
 ├── program42_5.c
 └── README.md
```

---

## Author

**Vivek Bhauraj Gautam**
 Email: [vivekbgautam@gmail.com](mailto:vivekbgautam@gmail.com)
 GitHub: [vivekbgautam](https://github.com/vivekbgautam)

---

> ⭐ If you find this project helpful, don't forget to star the repository!
