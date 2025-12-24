// Doubly Linear LINKED LIST

//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name  : node
//  Description : Represents a single node of doubly linked list
//  Data Members:
//      int data     → Stores integer data
//      node next    → Reference to next node
//      node prev    → Reference to previous node
//  Author       : Vivek Bhauraj Gautam
//  Date         : 24/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
class node
{
    public int data;
    public node next;
    public node prev;

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Constructor Name : node
    //  Description      : Initializes node with data and null links
    //  Input            : int no → Data value
    //  Author           : Vivek Bhauraj Gautam
    //  Date             : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    public node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name  : DoublyLL
//  Description : Implements Doubly Linear Linked List operations
//  Data Members:
//      node first  → Reference to first node
//      int iCount  → Stores total number of nodes
//  Author       : Vivek Bhauraj Gautam
//  Date         : 24/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
class DoublyLL
{
    private node first;
    private int iCount;

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Constructor Name : DoublyLL
    //  Description      : Initializes empty linked list
    //  Author           : Vivek Bhauraj Gautam
    //  Date             : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    public DoublyLL()
    {
        System.out.println("Objext of DoublyLL get created.");
        this.first = null;
        this.iCount = 0;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Function Name : Display
    //  Description   : Displays all elements of the doubly linked list
    //  Input         : None
    //  Output        : Prints all node data on screen
    //  Author        : Vivek Bhauraj Gautam
    //  Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    public void Display()
    {
        int iCnt = 0;
        node temp = null;

        temp = first;
        
        for(iCnt = 1; iCnt <= iCount; iCnt++)
        {
            System.out.print("| "+temp.data+" | <=> ");
            temp = temp.next;
        }

        System.out.println("null\n");
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Function Name : Count
    //  Description   : Counts total number of nodes in linked list
    //  Input         : None
    //  Output        : Returns integer count
    //  Author        : Vivek Bhauraj Gautam
    //  Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    public int Count()
    {
        return this.iCount;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Function Name : InsertFirst
    //  Description   : Inserts a new node at beginning of linked list
    //  Input         : int no → Data to be inserted
    //  Output        : Modifies linked list
    //  Author        : Vivek Bhauraj Gautam
    //  Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node(no);

        newn.next = this.first;
        this.first = newn;

        this.iCount++;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Function Name : InsertLast
    //  Description   : Inserts a new node at end of linked list
    //  Input         : int no → Data to be inserted
    //  Output        : Modifies linked list
    //  Author        : Vivek Bhauraj Gautam
    //  Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    public void InsertLast(int no)
    {
        node newn = null;
        node temp = null;

        newn = new node(no);

        if(first == null)
        {
            this.first = newn;
        }
        else 
        {
            temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }

        this.iCount++;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Function Name : InsertAtPos
    //  Description   : Inserts a new node at specified position
    //  Input         : int no → Data value
    //                  int pos → Position
    //  Output        : Modifies linked list
    //  Author        : Vivek Bhauraj Gautam
    //  Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    public void InsertAtPos(int no, int pos)
    {}

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Function Name : DeleteFirst
    //  Description   : Deletes first node of linked list
    //  Input         : None
    //  Output        : Removes first node
    //  Author        : Vivek Bhauraj Gautam
    //  Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    public void DeleteFirst()
    {}

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Function Name : DeleteLast
    //  Description   : Deletes last node of linked list
    //  Input         : None
    //  Output        : Removes last node
    //  Author        : Vivek Bhauraj Gautam
    //  Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    public void DeleteLast()
    {}

    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Function Name : DeleteAtPos
    //  Description   : Deletes node from specified position
    //  Input         : int pos → Position
    //  Output        : Removes node from given position
    //  Author        : Vivek Bhauraj Gautam
    //  Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    public void DeleteAtPos(int pos)
    {}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name  : program450_1
//  Description : Entry point function
//  Author      : Vivek Bhauraj Gautam
//  Date        : 24/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
class program450_2
{
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Function Name : main
    //  Description   : Demonstrates Doubly Linked List operations
    //  Input         : Command line arguments
    //  Output        : Displays results on screen
    //  Author        : Vivek Bhauraj Gautam
    //  Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    public static void main(String A[])
    {
        int iRet = 0;

        DoublyLL obj = null;
    
        obj = new DoublyLL(); 

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();

        iRet = obj.Count();
        System.out.println("Total node in linked list are : "+iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Total node in linked list are : "+iRet);

        obj.DeleteFirst();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Total node in linked list are : "+iRet);

        obj.DeleteLast();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Total node in linked list are : "+iRet);

        obj.InsertAtPos(105,4);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Total node in linked list are : "+iRet);

        obj.DeleteAtPos(4);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Total node in linked list are : "+iRet);

        System.out.println("Total node in linked list are : "+obj.Count());

        obj = null;
        System.gc();
    }
}
