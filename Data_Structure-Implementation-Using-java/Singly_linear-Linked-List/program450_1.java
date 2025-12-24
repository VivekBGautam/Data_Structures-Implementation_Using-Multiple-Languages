// Doubly Linear LINKED LIST 

class node
{
    public int data;
    public node next;
    public node prev;

    public node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLL
{
    private node first;
    private int iCount;

    public DoublyLL()
    {
        System.out.println("Objext of DoublyLL get created.");
        this.first = null;
        this.iCount = 0;
    }

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

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node(no);

        newn.next = this.first;
        this.first = newn;

        this.iCount++;
    }

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

    public void InsertAtPos(int no, int pos)
    {}

    public void DeleteFirst()
    {}
    public void DeleteLast()
    {}
    public void DeleteAtPos(int pos)
    {}

}

class program450_1
{
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

        // Important for memory deallocation
        obj = null;
        System.gc();

    }
}