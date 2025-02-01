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
typedef struct node** PPNODE;

class SinglyLL
{
    public:
    PNODE head;
    int iCount;

    SinglyLL()
    {
        head = NULL;
        iCount = 0;
    }


    void InsertFirst(int no)
    {
        PNODE newn = NULL;
        newn = new NODE;  // newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        if(head == NULL)
        {
            head = newn;
        }
        else
        {
            newn->next = head;
            head = newn;
        }
        iCount++;

    }
    void InsertLast(int no){
        PNODE newn = NULL;
        PNODE temp = NULL;
        newn = new NODE;  // newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        if(head == NULL)
        {
            head = newn;
        }
        else
        {
            temp = head;
            while(temp -> next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
            
        }
        iCount++;
    }
    void InsertAtPos(int no,int ipos)
    {
        PNODE newn = NULL;
        PNODE temp = NULL;
        
        int i =0;
        
        if(ipos<1 || ipos > iCount+1)
        {
            cout<<"Invalid positoon\n";
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
            newn = new NODE;
            newn->data = no;
            newn->next = NULL;

            temp = head;

            for(i=1;i<ipos-1;i++)
            {
                temp=temp->next;

            }
            newn->next = temp->next;
            temp->next=newn;
            iCount++;
        }
    }
    void DeleteFirst(){
        PNODE temp = NULL;

        if(head == NULL)
        {
            return;
        }
        else if(head->next == NULL)
        {
            delete head;
            head = NULL;

        }
        else
        {
            temp = head;

            head = head->next;
            delete temp;


        }
        iCount--;
    }
    void DeleteLast(){
        PNODE temp = NULL;
        if(head == NULL)
        {
            return;
        }
        else if(head->next == NULL)
        {
            delete head;
            head = NULL;

        }
        else
        {
            temp = head;

            while(temp->next->next != NULL)
            {
                temp = temp -> next;
            }
            

        }
        iCount--;
    }
    void DeleteAtPos(int ipos)
    {
         
        PNODE temp = NULL;
        
        int i =0;

        PNODE target = NULL;
        
        if(ipos<1 || ipos > iCount)
        {
            cout<<"Invalid positoon\n";
            return;
        }
        if(ipos==1)
        {
            DeleteFirst();
        }
        else if(ipos==iCount+1)
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
            target=temp->next;
            temp->next = target->next;
            delete target;
           
            iCount--;
        }
    }
    void Display()
    {
        PNODE temp = head;

        cout<<"Elements of LINKed LIST are :\n";

        while(temp != NULL)
        {
            cout<<"|"<<temp->data<<"|->";
            temp=temp->next;
        }
        cout<<"NULL\n";

    }
    int Count(){
        return iCount;
    }


};
class DoublyLL
{
    public:
    PNODE head;
    int iCount;
    DoublyLL()
    {
        head = NULL;
        iCount=0;
    }
    void Display()
    {
        PNODE temp = head;

        cout<<"Element of the LInked list are :\n";

        while(temp !=NULL)
        {
            cout<<"|"<<temp->data<<"|<=>";
            temp=temp->next;
        }
        cout<<"NULL\n";


    }
    int Count()
    {
        return iCount;
    }
    void InsertFirst(int no)
    {
        PNODE newn = NULL;
        newn = new NODE;
        newn->data=no;
        newn->next=NULL;
        newn->prev = NULL;
        if(head==NULL)
        {
            head=newn;
        }
        else{
            newn->next=head;
            head->prev=newn;
            head=newn;
        }
        iCount++;

    }
    void InsertLast(int no)
    {
        PNODE newn = NULL;
        PNODE temp = NULL;
        newn = new NODE;
        newn->data=no;
        newn->next=NULL;
        newn->prev = NULL;
        if(head==NULL)
        {
            head=newn;
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
            newn->prev = temp; 
        }
        iCount++;

    }
    void InsertAtPos(int no ,int ipos)
    {
        PNODE newn= NULL;
        int i= 0;
        PNODE temp= NULL;
        if((ipos<1)||(ipos>iCount+1))
        {
            cout<<"invalid position";
            return;
        }
        if(ipos == 1)
        {
            InsertFirst(no);
        }
        else if(ipos == iCount+1)
        {
            InsertLast(no);
        }
        else
        {
            newn = new NODE;
            newn->data = no;
            newn->next = NULL;
            newn->prev= NULL;
            temp=head;
            for(i=1;i<ipos-1;i++)
            {
                temp = temp->next;
            }
            newn->next = temp->next;
            temp->next->prev=newn;
            temp->next = newn;
            newn->prev = temp;
        }
        iCount++;

    }
    void DeleteFirst()
    {
        if(head==NULL)
        {
            return;
        }
        else if(head->next==NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            head=head->next;
            delete head->prev;
            head->prev= NULL;
            
        }
        iCount--;

    }
    void DeleteLast()
    {
        PNODE temp = NULL;
        if(head==NULL)
        {
            return;
        }
        else if(head->next==NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            temp=head;

            while(temp->next->next != NULL)
            {
                temp=temp->next;
            }
            delete temp->next;
            temp->next=NULL;
            
        }
        iCount--;

    }
    void DeleteAtPos(int ipos)
    {
        
        PNODE temp= NULL;
        PNODE target = NULL;
        int i= 0;
        if((ipos<1)||(ipos>iCount))
        {
            cout<<"invalid position";
            return;
        }
        if(ipos == 1)
        {
            DeleteFirst();
        }
        else if(ipos == iCount)
        {
            DeleteLast();
        }
        else
        {
            
            temp=head;
            for(i=1;i<ipos-1;i++)
            {
                temp = temp->next;
            }
            target=temp->next;
            temp->next = target->next;
            temp->next->prev=temp;
            delete target;
        }
        iCount--;

    }


};
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
    return 0;
}