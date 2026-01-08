////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program Name : Generic Queue Implementation using Linked List
//
// Description  : This program implements a Queue data structure using a generic
//                (template-based) approach in C++.
//                The Queue follows FIFO (First In First Out) principle and is
//                implemented internally using a singly linked list.
//                The program is menu-driven and allows insertion, deletion,
//                display, and counting of elements.
//
//                Internally, each element is stored inside a Queuenode which
//                contains data and a pointer to the next node.
//                The Queue maintains two pointers:
//                  - first : points to the front element
//                  - last  : points to the rear element
//
//                The following operations are supported:
//
//                1. EnQueue
//                   - Inserts a new element at the rear of the queue.
//                   - Time Complexity: O(1)
//
//                2. DeQueue
//                   - Removes and returns the front element from the queue.
//                   - Handles queue underflow condition.
//                   - Time Complexity: O(1)
//
//                3. Display
//                   - Displays all elements of the queue from front to rear.
//                   - Time Complexity: O(n)
//
//                4. Count
//                   - Returns the total number of elements present in the queue.
//                   - Time Complexity: O(1)
//
//                The program demonstrates:
//                - Generic programming using templates
//                - Dynamic memory allocation
//                - Pointer manipulation
//                - Queue logic using linked list
//
//                This implementation is intended for:
//                - College practical submissions
//                - Understanding Queue internals
//                - Interview preparation
//
// Author       : Vivek Bhauraj Gautam
// Email        : vivekbgautam@gmail.com
// GitHub       : https://github.com/vivekbgautam
// Date         : January 2026
//
////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program Name : Generic Queue Implementation
// Description  : This program demonstrates the implementation of a Queue data structure
//                using a generic (template-based) approach in C++.
//                The Queue follows the FIFO (First In First Out) principle and is
//                implemented using a singly linked list.
//                The program supports EnQueue, DeQueue, Display, and Count operations
//                using a menu-driven approach.
// Author       : Vivek Bhauraj Gautam
// Date         : January 2026
//
////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////
//
// Constructor Name : Queuenode
// Description      : Initializes a new queue node with the given data.
//                    Sets the next pointer to NULL.
// Input            : T no → Value to be stored in the node
// Output           : Creates and initializes a queue node
// Author           : Vivek Bhauraj Gautam
// Date             : January 2026
//
////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////
//
// Constructor Name : Queue
// Description      : Initializes an empty queue.
//                    Sets first and last pointers to NULL and initializes
//                    the element count to zero.
// Input            : void
// Output           : Queue object is created successfully
// Author           : Vivek Bhauraj Gautam
// Date             : January 2026
//
////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : EnQueue
// Description   : Inserts a new element at the end of the queue.
//                 Maintains FIFO (First In First Out) order.
// Input         : T no → Element to be inserted into the queue
// Output        : Queue is updated with new element
// Author        : Vivek Bhauraj Gautam
// Date          : January 2026
//
////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DeQueue
// Description   : Removes the first element from the queue and returns it.
//                 Handles underflow condition when the queue is empty.
// Input         : void
// Output        : Returns the removed element of type T
// Author        : Vivek Bhauraj Gautam
// Date          : January 2026
//
////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays all elements of the queue from front to rear.
// Input         : void
// Output        : Prints all queue elements on console
// Author        : Vivek Bhauraj Gautam
// Date          : January 2026
//
////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Count
// Description   : Returns the total number of elements present in the queue.
// Input         : void
// Output        : Integer value representing element count
// Author        : Vivek Bhauraj Gautam
// Date          : January 2026
//
////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function : main
// Description          : Menu-driven function to demonstrate all queue operations
//                        such as insertion, deletion, display, and counting
//                        using a generic queue implementation.
// Input                : User choice and values
// Output               : Executes selected queue operations
// Author               : Vivek Bhauraj Gautam
// Date                 : January 2026
//
////////////////////////////////////////////////////////////////////////////////////////////////
