#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL
{
    public:
    PNODE head;
    PNODE tail;
    int iCount;
    DoublyCL()
    {
        head = NULL;
        tail = NULL;
        iCount = 0;
    }
    void InsertFirst(int no)
    {
        PNODE newn = NULL;
        newn  = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        if((head == NULL) && (tail == NULL))
        {
            head = newn;
            tail = newn;
        }
        else
        {
            newn->next = head;
            head->prev = newn;
            head=newn;
        }
        head->prev = tail;
        tail->next = head;
        iCount++;
    }
    void InsertLast(int no)
    {
        PNODE newn = NULL;
        newn  = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        if((head == NULL) && (tail == NULL))
        {
            head = newn;
            tail = newn;
        }
        else
        {
            tail->next=newn;
            newn->prev=tail;
            tail=newn;
        }
        head->prev = tail;
        tail->next = head;
        iCount++;

    }
    void DeleteFirst()
    {
        if(head == NULL && tail == NULL)
        {
            return;
        }
        else if(head == tail)
        {
            delete head;
            head = NULL;
            tail = NULL;
        }
        else
        {
            head = head->next;
            delete tail->next;
            tail->next = head;
            head->prev=tail;
        }
        iCount--;
        
    }
    void DeleteLast()
    {
         if(head == NULL && tail == NULL)
        {
            return;
        }
        else if(head == tail)
        {
            delete head;
            head = NULL;
            tail = NULL;
        }
        else
        {
            tail = tail->prev;
            delete tail->next;
            tail->next = head;
            head->prev=tail;
        }
        iCount--;

    }
    

    void Display()
    {
        PNODE temp = head;
        PNODE temp1 = tail;
        if(temp==NULL && temp1==NULL)
        {
            cout<<"Linked list is empty";
            return;
        }
        do
        {
            cout<<"|"<<temp->data<<"|<=>";
            temp = temp->next;
        }while(temp != temp1->next);
        cout<<"\n";
    }
    int Count()
    {
        return iCount;
    }
    void InsertAtPos(int no,int ipos)
    {
        PNODE newn = NULL;
        PNODE temp = NULL;
        
        int i =0;
        if(ipos<1 || ipos>iCount+1)
        {
            cout<<"invalide posotion";
            return;
        }
        if(ipos==1)
        {
            InsertFirst(no);
        }
        else if(ipos==iCount+1)
        {
            InsertLast(no);
        }
        else
        {
            newn  = new NODE;
            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            temp = head;
            for(i=1;i<ipos-1;i++)
            {
                temp=temp->next;
            }
            newn->next=temp->next;
            temp->next->prev = newn;
            newn->prev=temp;
            temp->next=newn;

        }
        iCount++;
    }
    void DeleteAtPos(int ipos)
    {
        PNODE target = NULL;
        PNODE temp = NULL;
        
        int i =0;
        if(ipos<1 || ipos>iCount)
        {
            cout<<"invalide posotion";
            return;
        }
        if(ipos==1)
        {
            DeleteFirst();
        }
        else if(ipos==iCount)
        {
            DeleteLast();
        }
        else
        {
           
            temp = head;
            for(i=1;i<ipos-1;i++)
            {
                temp=temp->next;
            }
            target = temp->next;
            temp->next=target->next;
            temp->next->prev=temp;
            delete target;

        }
        iCount--;

    }
    
};
int main()
{
    DoublyCL dobj;

   

    int iRet =0;


    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.InsertLast(101);
    dobj.InsertLast(121);
    dobj.InsertLast(111);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";
    dobj.DeleteFirst();
    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.DeleteLast();
    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.InsertAtPos(75,4);
    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";
    dobj.DeleteAtPos(4);
    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";




    

    return 0;
}

