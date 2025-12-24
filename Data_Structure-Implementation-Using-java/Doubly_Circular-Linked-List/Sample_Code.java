// Doubly Circular LINKED LIST 

class node
{
    public int data;
    public node next;
    public node prev;

    public node(int no)
    {
        // Initialize node with data
        this.data = no;
        // Next and prev are null initially
        this.next = null;
        this.prev = null;
    }
}

class DoublyCL
{
    private node first;
    private node last;
    private int iCount;

    public DoublyCL()
    {
        System.out.println("Object of DoublyCL get created.");
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    // Display all nodes in the circular linked list
    public void Display()
    {
        // Check if list is empty
        // Traverse starting from first until we reach first again
        // Print data of each node
    }

    // Returns number of nodes in the list
    public int Count()
    {
        return this.iCount;
    }

    // Insert node at the beginning of list
    public void InsertFirst(int no)
    {
        // Create new node
        // If list is empty, make first and last point to new node
        // Otherwise, adjust pointers: newn.next -> first, first.prev -> newn, last.next -> newn, newn.prev -> last
        // Update first pointer
        // Increment iCount
    }

    // Insert node at the end of list
    public void InsertLast(int no)
    {
        // Create new node
        // If list is empty, make first and last point to new node
        // Otherwise, adjust pointers: last.next -> newn, newn.prev -> last, newn.next -> first, first.prev -> newn
        // Update last pointer
        // Increment iCount
    }

    // Insert node at a specific position
    public void InsertAtPos(int no, int pos)
    {
        // Check for valid position
        // If position is 1, call InsertFirst
        // If position is iCount+1, call InsertLast
        // Otherwise, traverse to (pos-1) node and adjust pointers to insert new node
        // Increment iCount
    }

    // Delete first node
    public void DeleteFirst()
    {
        // Check if list is empty
        // If only one node, set first and last to null
        // Otherwise, adjust pointers: first = first.next, last.next -> first, first.prev -> last
        // Decrement iCount
    }

    // Delete last node
    public void DeleteLast()
    {
        // Check if list is empty
        // If only one node, set first and last to null
        // Otherwise, adjust pointers: last = last.prev, last.next -> first, first.prev -> last
        // Decrement iCount
    }

    // Delete node at specific position
    public void DeleteAtPos(int pos)
    {
        // Check for valid position
        // If position is 1, call DeleteFirst
        // If position is iCount, call DeleteLast
        // Otherwise, traverse to (pos-1) node and adjust pointers to remove node
        // Decrement iCount
    }
}

class Sample_Code
{
    public static void main(String A[])
    {
        int iRet = 0;

        DoublyCL obj = null;
    
        obj = new DoublyCL(); 

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
