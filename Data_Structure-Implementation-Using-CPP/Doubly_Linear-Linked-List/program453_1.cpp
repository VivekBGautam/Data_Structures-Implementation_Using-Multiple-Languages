// Doubly LL

#include<iostream>
using namespace std;

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
        int Count()
        {
            return this->iCount;
        }
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
        void InsertLast(int no)
        {
            
        }
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
