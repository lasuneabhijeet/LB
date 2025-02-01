#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    int no;
    struct node *next;
}NODE,*PNODE;

class stack
{
    public:
    PNODE head;
    int iCount;

    stack()
    {
        head = NULL;
        iCount = 0;
    }
    void push(int no)
    {
        PNODE newn = NULL;
        newn = new(NODE);
        newn->data = no;
        newn->next= NULL;
        if(head == NULL)
        {
            head = newn;
        }
        else
        {
            newn->next = head;
            head=newn;
        }
        iCount++;

    }
    int pop()
    {
        if(head ==)
        

    }
    void Display()
    {

    }
    int iCount()
    {
        return iCount;
    }
}

int main()
{

    return 0;
}