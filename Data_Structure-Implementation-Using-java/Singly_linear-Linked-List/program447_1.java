// Complete Singly Linear Linked List

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name  : node
// Description : Represents a single node of a singly linear linked list.
//               Each node stores integer data and a reference to the next node.
// Data Members:
//      int data   → Stores the value of the node
//      node next  → Reference to the next node in the list
// Author      : Vivek Bhauraj Gautam
// Date        : 24/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
class node
{
    public int data;
    public node next;

    //////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Constructor Name : node
    // Description      : Initializes a node with given data and sets next reference to null.
    // Input            : int no → Value to be stored in the node
    // Author           : Vivek Bhauraj Gautam
    // Date             : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////
    public node(int no)
    {
        this.data = no;
        this.next = null;  
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name  : SinglyLL
// Description : Implements operations of a Singly Linear Linked List such as insertion,
//               deletion, display, and counting of nodes.
// Data Members:
//      node first → Reference to the first node (head)
//      int iCount → Stores total number of nodes in the list
// Author      : Vivek Bhauraj Gautam
// Date        : 24/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
class SinglyLL
{
    private node first;
    private int iCount;

    //////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Constructor Name : SinglyLL
    // Description      : Initializes an empty singly linear linked list.
    // Author           : Vivek Bhauraj Gautam
    // Date             : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////
    public SinglyLL()
    {
        System.out.println("Object of SinglyLL get created.");
        this.first = null;
        this.iCount = 0;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : Display
    // Description   : Displays all elements of the linked list in sequence.
    // Input         : None
    // Output        : Prints linked list elements on the screen
    // Author        : Vivek Bhauraj Gautam
    // Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////
    public void Display()
    {
        node temp = null;

        temp = this.first;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" | ->");
            temp = temp.next;
        }

        System.out.println(" null");
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : Count
    // Description   : Returns the total number of nodes present in the linked list.
    // Input         : None
    // Output        : int → Number of nodes
    // Author        : Vivek Bhauraj Gautam
    // Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////
    public int Count()
    {
        return this.iCount;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : InsertFirst
    // Description   : Inserts a new node at the beginning of the linked list.
    // Input         : int no → Data to be inserted
    // Output        : Modifies linked list
    // Author        : Vivek Bhauraj Gautam
    // Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////
    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node(no);

        newn.next = this.first;
        this.first = newn;

        this.iCount++;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : InsertLast
    // Description   : Inserts a new node at the end of the linked list.
    // Input         : int no → Data to be inserted
    // Output        : Modifies linked list
    // Author        : Vivek Bhauraj Gautam
    // Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////
    public void InsertLast(int no)
    {
        node newn = null;
        node temp = null;

        newn = new node(no);

        if(this.first == null)
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

    //////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : InsertAtPos
    // Description   : Inserts a new node at a specified position in the linked list.
    // Input         : int no  → Data to be inserted
    //                 int pos → Position at which node is to be inserted
    // Output        : Modifies linked list
    // Author        : Vivek Bhauraj Gautam
    // Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////
    public void InsertAtPos(int no, int pos)
    { 
        int iCnt = 0;

        node temp = null;
        node newn = null;

        if(pos < 1 || pos > iCount + 1)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(pos == 1)
        {
            this.InsertFirst(no);
        }
        else if(pos == iCount + 1)
        {
            this.InsertLast(no);
        }
        else 
        {
            newn = new node(no);

            temp = this.first;

            for(iCnt = 1; iCnt < pos -1; iCnt++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;
            
            this.iCount++;
        }
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : DeleteFirst
    // Description   : Deletes the first node from the linked list.
    // Input         : None
    // Output        : Modifies linked list
    // Author        : Vivek Bhauraj Gautam
    // Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////
    public void DeleteFirst()
    {
        if(this.first == null)
        {
            return;
        }
        else if(this.first.next == null)
        {
            this.first = null;
        }
        else 
        {
            this.first = this.first.next;
        }

        System.gc();
        this.iCount--;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : DeleteLast
    // Description   : Deletes the last node from the linked list.
    // Input         : None
    // Output        : Modifies linked list
    // Author        : Vivek Bhauraj Gautam
    // Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////
    public void DeleteLast()
    {
        node temp = null;

        if(this.first == null)
        {
            return;
        }
        else if(this.first.next == null)
        {
            this.first = null;
        }
        else 
        {
            temp = this.first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null;
        }

        System.gc();
        this.iCount--;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : DeleteAtPos
    // Description   : Deletes a node from a specified position in the linked list.
    // Input         : int pos → Position of node to be deleted
    // Output        : Modifies linked list
    // Author        : Vivek Bhauraj Gautam
    // Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////
    public void DeleteAtPos(int pos)
    {
        int iCnt = 0;

        node temp = null;

        if(pos < 1 || pos > iCount)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(pos == 1)
        {
            this.DeleteFirst();
        }
        else if(pos == iCount)
        {
            this.DeleteLast();
        }
        else 
        {
            temp = this.first;

            for(iCnt = 1; iCnt < pos -1; iCnt++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;

            System.gc();
            this.iCount--;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name  : program447_1
// Description : Entry point class to demonstrate Singly Linear Linked List operations.
// Author      : Vivek Bhauraj Gautam
// Date        : 24/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////
class program447_1
{
    //////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Function Name : main
    // Description   : Demonstrates insertion, deletion, display, and counting operations
    //                 on Singly Linear Linked List.
    // Input         : Command line arguments
    // Output        : Displays linked list and node count
    // Author        : Vivek Bhauraj Gautam
    // Date          : 24/12/2025
    //
    //////////////////////////////////////////////////////////////////////////////////////////////////
    public static void main(String A[])
    {
        int iRet = 0;

        SinglyLL obj = null;
    
        obj = new SinglyLL(); 

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

        // Important for memory deallocation
        obj = null;
        System.gc();
    }
}
