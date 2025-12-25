#include<stdio.h>
#include<stdlib.h>


#pragma pach(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Displays all elements of the singly linked list.
//  Input         : PNODE first  →  Pointer to the first node of the linked list
//                  PNODE last  →  Pointer to the last node of the linked list
//  Output        : Prints all node data on screen
//  Author        : Vivek Bhauraj Gautam
//  Date          : 22/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE first, PNODE last)
{
    if(first == NULL && last == NULL)           // LL is empty  IMP
    {
        printf("Linked list is emplty \n ");
        return;
    }

    printf(" <=> ");
    do
    {
        printf("| %d | <=> ",first->data);
        first = first->next;

    } while( first != last->next);

    printf("\n");
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Description   : Counts the total number of nodes present in the linked list.
//  Input         : PNODE first  →  Pointer to the first node of the linked list
//                  PNODE last  →  Pointer to the last node of the linked list
//  Output        : Returns integer count of nodes
//  Author        : Vivek Bhauraj Gautam
//  Date          : 22/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
int Count(PNODE first, PNODE last)
{
    int iCount = 0;

    if(first == NULL && last == NULL)           // LL is empty   IMP
    {
        return 0;
    }

    do
    {
        iCount++;
        first = first->next;

    } while( first != last->next);

    return iCount;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertFirst
//  Description   : Inserts a new node at the beginning of the linked list.
//  Input         : PPNODE first → Address of first pointer
//                  PPNODE last  → Address of last pointer
//                  int no       → Data to be inserted in the node
//  Output        : Modifies linked list by adding new node at first position
//  Author        : Vivek Bhauraj Gautam
//  Date          : 22/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE first, PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL &&   *last == NULL)             // LL is empty
    {
        *first = newn;
        *last = newn;
    }
    else                            // LL contain one or more
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;

    }

    (*last)->next = *first;
    (*first)->prev = *last;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertLast
//  Description   : Inserts a new node at the end of the linked list.
//  Input         : PPNODE first → Address of first pointer
//                  PPNODE last → Address of last pointer
//                  int no        → Data to be inserted in the node
//  Output        : Modifies linked list by adding new node at last position
//  Author        : Vivek Bhauraj Gautam
//  Date          : 22/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
void InsertLast(PPNODE first, PPNODE last, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)             // LL is empty
    {
        *first = newn;
        *last = newn;
    }
    else                            // LL contain one or more
    {
        (*last)->next = newn;
        newn->prev = *last;
        
        *last = newn;
    }

    (*last)->next = *first;
    (*first)->prev = *last;
}

void InsertAtPos(PPNODE first, PPNODE last, int no, int pos)
{
    int iSize = 0;
    int iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    iSize = Count(*first , *last);

    if(pos < 1 || pos > iSize + 1)
    {
        printf("Invalid position\n");
        return;
    }
    
    if(pos == 1)
    {
        InsertFirst(first,last,no);
    }
    else if(pos == iSize + 1)
    {
        InsertLast(first,last,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DeleteFirst
//  Description   : Deletes the first node of the linked list.
//  Input         : PPNODE first → Address of first pointer
//                  PPNODE last → Address of last pointer
//  Output        : Removes first node and frees its memory
//  Author        : Vivek Bhauraj Gautam
//  Date          : 22/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteFirst(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)         // LL Is empty
    {
        return;
    }
    else if(*first == *last)                    // LL contain one node 
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*first)->prev);
        

        (*last)->next = *first;
        (*first)->prev = *last;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DeleteLast
//  Description   : Deletes the first node of the linked list.
//  Input         : PPNODE first → Address of first pointer
//                  PPNODE last → Address of last pointer
//  Output        : Removes last node and frees its memory
//  Author        : Vivek Bhauraj Gautam
//  Date          : 19/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteLast(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)         // LL Is empty
    {
        return;
    }
    else if(*first == *last)                    // LL contain one node 
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *last = (*last)->prev;
        free((*last)->next);

        (*last)->next = *first;
        (*first)->prev = *last;
        
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DeleteAtPos
//  Description   : Deletes a node from a specific position in the linked list.
//  Input         : PPNODE first → Address of first pointer
//                  PPNODE last → Address of last pointer
//                  int pos       → Position of the node to be deleted
//  Output        : Removes node from given position and frees its memory
//  Author        : Vivek Bhauraj Gautam
//  Date          : 22/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteAtPos(PPNODE first, PPNODE last,int pos)
{
    int iSize = 0;
    int iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    iSize = Count(*first , *last);

    if(pos < 1 || pos > iSize)
    {
        printf("Invalid position\n");
        return;
    }
    
    if(pos == 1)
    {
        DeleteFirst(first,last);
    }
    else if(pos == iSize)
    {
        DeleteLast(first,last);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}


int main()
{
    int iRet = 0;

    PNODE head = NULL;
    PNODE tail = NULL;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Total node in Linked list is : %d\n",iRet);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Total node in Linked list is : %d\n",iRet);

    DeleteFirst(&head,&tail);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Total node in Linked list is : %d\n",iRet);

    DeleteLast(&head,&tail);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Total node in Linked list is : %d\n",iRet);

    InsertAtPos(&head,&tail,105,4);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Total node in Linked list is : %d\n",iRet);

    DeleteAtPos(&head,&tail,5);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Total node in Linked list is : %d\n",iRet);

    return 0;
}