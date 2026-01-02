// Q - Write a program which check weather linked list is empty.

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Required header File
//
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Displays all elements of the singly linked list.
//  Input         : PNODE first  →  Pointer to the first node of the linked list
//  Output        : Prints all node data on screen
//  Author        : Vivek Bhauraj Gautam
//  Date          : 29/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE first)
{
    if(first == NULL)
    {
        printf("Linked List is Empty\n");
        return;
    }

    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }

    printf(" NULL\n");
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Description   : Counts the total number of nodes present in the linked list.
//  Input         : PNODE first  →  Pointer to the first node of the linked list
//  Output        : Returns integer count of nodes
//  Author        : Vivek Bhauraj Gautam
//  Date          : 29/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }

    printf("\n");
    return iCount;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertFirst
//  Description   : Inserts a new node at the beginning of the linked list.
//  Input         : PPNODE first → Address of first pointer
//                  int no        → Data to be inserted in the node
//  Output        : Modifies linked list by adding new node at first position
//  Author        : Vivek Bhauraj Gautam
//  Date          : 29/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    if(newn == NULL)
    {
        return;
    }

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else 
    {
        newn->next = *first;
        *first = newn;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : IsEmpty
//  Description   : Check weather Linked List is empty or not.
//  Input         : PNODE first → Pointer to first node
//  Output        : return TRUE is Linkes list is empty else FALSE
//  Author        : Vivek Bhauraj Gautam
//  Date          : 30/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
BOOL IsEmpty(PNODE first)
{
    if(first == NULL)
    {
        return TRUE;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Entry Point Function (main)
// Description   : It is user to demonstrate the Deffrent opration on Linked list
// Date          : 29/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iRet = 0;
    BOOL bRet = FALSE;
    PNODE head = NULL;

    // InsertFirst(&head,241);
    // InsertFirst(&head,240);
    // InsertFirst(&head,311);
    // InsertFirst(&head,231);
    // InsertFirst(&head,110);

    Display(head);
    iRet = Count(head);
    printf("Total node in Linked list is : %d \n",iRet);

    bRet = IsEmpty(head);

    if(bRet == TRUE)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        printf("Linked list contain one or more element\n");
    }

    while(head != NULL)
    {
        PNODE temp = head;
        head = head->next;
        free(temp);
    }

    head = NULL;

    return 0;
}