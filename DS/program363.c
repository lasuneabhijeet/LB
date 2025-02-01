#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE,*PNODE,**PPNODE;


void InsertFirst(PPNODE head,PPNODE tail,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    if((*head == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;

    }
    else
    {
        newn->next = *head;
        (*head)->prev=newn;
        *head = newn;


    }
    (*tail)->next = *head;
    (*head)->prev = *tail;
    
}
void InsertLast(PPNODE head,PPNODE tail,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    if((*head == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;

    }
    else
    {
        (*tail)->next = newn;
        newn->prev = *tail;

        *tail= newn;

    

    }
    (*tail)->next = *head;
    (*head)->prev = *tail;

}
void InsertAtPos(PPNODE head,PPNODE tail,int no,int ipos){}

void DeleteFirst(PPNODE head,PPNODE tail){}
void DeleteLast(PPNODE head,PPNODE tail){}
void DeleteAtPos(PPNODE head,PPNODE tail,int ipos){}

void Display(PNODE head,PNODE tail)
{
    if(head == NULL && tail == NULL)
    {
        printf("Linkedlist is empty\n");
        return;

    }
    do{
        printf("|%d|<=>",head->data);
        head = head -> next;

    }while(head != tail->next);

    printf("\n");
}
int Count(PNODE head,PNODE tail)
{
    int iCount = 0;
    if(head == NULL && tail == NULL)
    {
        
        return 0;

    }
    do{
        iCount++;
        head = head -> next;

    }while(head != tail->next);

    
    return iCount;
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iRet = 0;

    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);

    InsertLast(&first,&last,101);
    InsertLast(&first,&last,121);
    InsertLast(&first,&last,111);

    Display(first,last);

    iRet = Count(first,last);
    printf("number of elements are : %d\n",iRet);


    return 0;

}