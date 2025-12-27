// Doubly Linear Linked List 

#include<iostream>
using namespace std;

#pragma pack(1)

////////////////////////////////////////////////////////////////////////
//
// Structure Name : node
// Description    : Represents a node of Doubly Linear Linked List
// Members        :
//      data  - Stores integer data
//      next  - Pointer to next node
//      prev  - Pointer to previous node
//
////////////////////////////////////////////////////////////////////////
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

////////////////////////////////////////////////////////////////////////
//
// Class Name  : DoublyLL
// Description : Implements Doubly Linear Linked List
//
////////////////////////////////////////////////////////////////////////
class DoublyLL
{
    private:                        // IMPORTANT
        PNODE first;                // Head pointer
        int iCount;                 // Node counter

    public:
        DoublyLL()
        {
            cout<<"Object of DoublyLL get created.\n";
            this->first = NULL;
            this->iCount = 0;
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        //
        //  Function Name : Display
        //  Description   : Displays all elements of the doubly linked list.
        //  Input         : void
        //  Output        : Prints all node data on screen in forward direction
        //  Author        : Vivek Bhauraj Gautam
        //  Date          : 27/12/2025
        //
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        void Display()
        {
            PNODE temp = NULL;

            temp = first;

            cout<<"\n NULL";

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" | <=> ";
                temp = temp->next;

            }

            cout<<" NULL\n";
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        //
        //  Function Name : Count
        //  Description   : Returns total number of nodes present in linked list.
        //  Input         : void
        //  Output        : Integer count of nodes
        //  Author        : Vivek Bhauraj Gautam
        //  Date          : 27/12/2025
        //
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        int Count()
        {
            return this->iCount;
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        //
        //  Function Name : InsertFirst
        //  Description   : Inserts a new node at the beginning of doubly linked list.
        //  Input         : int no → Data to be inserted
        //  Output        : Modifies linked list by adding node at first position
        //  Author        : Vivek Bhauraj Gautam
        //  Date          : 27/12/2025
        //
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new (NODE);

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else 
            {
                newn->next = first;
                first->prev = newn;
                first = newn;
            }

            iCount++;
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        //
        //  Function Name : InsertLast
        //  Description   : Inserts a new node at the end of doubly linked list.
        //  Input         : int no → Data to be inserted
        //  Output        : Modifies linked list by adding node at last position
        //  Author        : Vivek Bhauraj Gautam
        //  Date          : 27/12/2025
        //
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        void InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;

            newn = new (NODE);

            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else 
            {
                temp = first;

                while(temp->next != NULL)
                {
                    temp = temp->next;
                }

                newn->prev = temp;
                temp->next = newn;
            }

            iCount++;
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        //
        //  Function Name : InsertAtPos
        //  Description   : Inserts a new node at a specific position in doubly linked list.
        //  Input         : int no  → Data to be inserted
        //                  int pos → Position where node is to be inserted
        //  Output        : Modifies linked list by inserting node at given position
        //  Author        : Vivek Bhauraj Gautam
        //  Date          : 27/12/2025
        //
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        void InsertAtPos(int no,int pos)
        {
            int iCnt = 0;

            PNODE newn = NULL;
            PNODE temp = NULL;

            if(pos < 1 || pos > iCount + 1)
            {
                cout<<"Invalid Position\n";
                return;
            }

            if(pos == 1)
            {
                InsertFirst(no);
            }
            else if(pos == iCount + 1)
            {
                InsertLast(no);
            }
            else 
            {
                newn = new (NODE);

                newn->data = no;
                newn->next = NULL;
                newn->prev = NULL;

                temp = first;

                for(iCnt = 1; iCnt < pos - 1; iCnt++)
                {
                    temp = temp->next;
                }

                newn->next = temp->next;
                newn->prev = temp;

                temp->next->prev = newn;
                temp->next = newn;

                iCount++;
            }
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        //
        //  Function Name : DeleteFirst
        //  Description   : Deletes the first node of doubly linked list.
        //  Input         : void
        //  Output        : Removes first node and frees its memory
        //  Author        : Vivek Bhauraj Gautam
        //  Date          : 27/12/2025
        //
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        void DeleteFirst()
        {
            PNODE temp = NULL;

            if(first == NULL)
            {
                return;
            }
            else if(first->next == NULL)
            {
                delete first;
                first = NULL;
            }
            else 
            {
                temp = first;

                first = first->next;
                first->prev = NULL;
                delete temp;
            }

            iCount--;
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        //
        //  Function Name : DeleteLast
        //  Description   : Deletes the last node of doubly linked list.
        //  Input         : void
        //  Output        : Removes last node and frees its memory
        //  Author        : Vivek Bhauraj Gautam
        //  Date          : 27/12/2025
        //
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        void DeleteLast()
        {
            PNODE temp = NULL;
            PNODE target = NULL;

            if(first == NULL)
            {
                return;
            }
            else if(first->next == NULL)
            {
                delete first;
                first = NULL;
            }
            else 
            {
                temp = first;

                while(temp->next->next != NULL)
                {
                    temp = temp->next;;
                }

                delete temp->next;
                temp->next =  NULL;
            }

            iCount--;
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////
        //
        //  Function Name : DeleteAtPos
        //  Description   : Deletes node from a specific position in doubly linked list.
        //  Input         : int pos → Position of node to be deleted
        //  Output        : Removes node from given position and frees its memory
        //  Author        : Vivek Bhauraj Gautam
        //  Date          : 27/12/2025
        //
        ////////////////////////////////////////////////////////////////////////////////////////////////////
        void DeleteAtPos(int pos)
        {
            int iCnt = 0;

            PNODE temp = NULL;
            PNODE target = NULL;

            if(pos < 1 || pos > iCount)
            {
                cout<<"Invalid Position\n";
                return;
            }

            if(pos == 1)
            {
                DeleteFirst();
            }
            else if(pos == iCount)
            {
                DeleteLast();
            }
            else 
            {
                temp = first;

                for(iCnt = 1; iCnt < pos - 1; iCnt++)
                {
                    temp = temp->next;
                }

                target = temp->next;
                temp->next = target->next;
                delete target;

                iCount--;
            }
        }
};

////////////////////////////////////////////////////////////////////////
//
// Entry Point Function : main
// Description          : Demonstrates operations on Doubly Linear Linked List
//
////////////////////////////////////////////////////////////////////////
int main()
{
    DoublyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    iRet = obj.Count();

    cout<<"total node in linked list is : "<<iRet<<"\n";

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();

    iRet = obj.Count();

    cout<<"total node in linked list is : "<<iRet<<"\n";

    obj.DeleteFirst();

    obj.Display();

    iRet = obj.Count();

    cout<<"total node in linked list is : "<<iRet<<"\n";

    obj.DeleteLast();

    obj.Display();

    iRet = obj.Count();

    cout<<"total node in linked list is : "<<iRet<<"\n";

    obj.InsertAtPos(105,4);

    obj.Display();

    iRet = obj.Count();

    cout<<"total node in linked list is : "<<iRet<<"\n";

    obj.DeleteAtPos(4);

    obj.Display();

    iRet = obj.Count();

    cout<<"total node in linked list is : "<<iRet<<"\n";
}
