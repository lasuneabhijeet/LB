#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;
void push(PPNODE head,int no)// Inserfirst
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next = NULL;
    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}
int pop(PPNODE head)//DeleteFirst
{


}
void Display(PNODE head)
{}
void Count(PNODE head)
{}
int main()
{
    PNODE first = NULL;

    push(&first,51);
    push(&first,21);
    push(&first,11);
    push(&first,1);

    return 0;
}