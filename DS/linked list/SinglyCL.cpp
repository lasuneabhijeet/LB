#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    public:
    PNODE head;
    PNODE tail;
    int iCount;
    SinglyCL()
    {
        head = NULL;
        tail = NULL;
        iCount = 0;
    }
    void InsertFirst(int no)
    {
       
        PNODE newn = NULL;
        newn = new NODE;
        newn->data=no;
        newn->next=NULL;
        if((head ==NULL) && (tail == NULL))
        {
            head=newn;
            tail=newn;
        }
        else
        {
            newn->next = head;
            head=newn;
        }
        tail->next=head;
        iCount++;
    }
    void InsertLast(int no)
    {
        PNODE newn = NULL;
        newn = new NODE;
        newn->data=no;
        newn->next=NULL;
        if((head ==NULL) && (tail == NULL))
        {
            head=newn;
            tail=newn;
        }
        else
        {
            tail->next = newn;
            tail=newn;
        }
        tail->next=head;
        iCount++;
    }
    
    void DeleteFirst()
    {
        if((head==NULL)&&(tail==NULL))
        {
            cout<<"invalid position";
            return;
        }
        else if(head==tail)
        {
            delete head;
            head = NULL;
            tail = NULL;
        }
        else
        {
            head = head->next;
            delete tail->next;
            tail->next= head;
        }
        iCount--;
    }
    void DeleteLast()
    {
        PNODE temp = NULL;
    
        if((head==NULL)&&(tail==NULL))
        {
            cout<<"invalid position";
            return;
        }
        else if(head==tail)
        {
            delete head;
            head = NULL;
            tail = NULL;
        }
        else
        {
            temp = head;

            while(temp->next != tail)
            {
                temp=temp->next;
            }
            delete temp->next;
            tail = temp;
            tail->next=head;
            
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
            temp=head;
            for(i=1;i<ipos-1;i++)
            {
                temp=temp->next;
            }
            newn->next = temp->next;
            temp->next=newn;
        }
        iCount++;

    }
     void DeleteAtPos(int ipos)
     {
        PNODE temp = NULL;
        PNODE target = NULL;
        
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
            
            temp=head;
            for(i=1;i<ipos-1;i++)
            {
                temp=temp->next;
            }
            target = temp->next;
        temp->next=target->next;
        delete target;
            
        }
        
        iCount--;


     }
    
    
};
int main()
{
    SinglyCL sobj;
    int iRet =0;


    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";


    sobj.InsertLast(101);
    sobj.InsertLast(121);
    sobj.InsertLast(111);


    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.DeleteFirst();
    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";
    sobj.DeleteLast();
    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.InsertAtPos(75,4);
    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";
    sobj.DeleteAtPos(4);
    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    
    

    return 0;
}

