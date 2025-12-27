// Doubly LL

#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL
{
    private:
        PNODE first;                // head
        int iCount;

    public:
        DoublyLL()
        {
            cout<<"Object of DoublyLL get created.\n";
            this->first = NULL;
            this->iCount = 0;
        }

        void Display()
        {}
        int Count()
        {
            return this->iCount;
        }
        void InsertFirst(int no)
        {}
        void InsertLast(int no)
        {}
        void InsertAtPos(int no,int pos)
        {}
        void DeleteFirst()
        {}
        void DeleteLast()
        {}
        void DeleteAtPos(int pos)
        {}

};

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

    return 0;
}
