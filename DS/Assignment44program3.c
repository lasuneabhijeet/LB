#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
     struct node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertFirst(PPNODE Head ,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next= NULL;
    newn->data= no;
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;

    }
}
void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d | ->\t",head->data);
        head = head->Next;
    }
    printf("NULL\n");

}
int Addition(PNODE head)
{
    int sum = 0;  
    while (head != NULL) {
        
        sum = sum +head->data;
        head = head->Next;
       
    }
    return sum; 

}

int main()
{
    PNODE First = NULL;
    int element = 0,i=0,iValue =0,no=0,iRet = 0;

    printf("enter the numberof element  want : \n");
    scanf("%d",&element);

    printf("Enter the elements:\n");

    for(i=1;i<=element;i++)
    {
        scanf("%d",&iValue);
        InsertFirst(&First,iValue);

    }
    Display(First);
  
    
    iRet = Addition(First);
    printf("Addition is  : %d",iRet);
   

    return 0;

    
}
/*
PS D:\abhijeet\LB\DS> gcc Assignment44program3.c -o myexe
PS D:\abhijeet\LB\DS> ./myexe.exe
enter the numberof element  want :
4
Enter the elements:
40
30
20
10
| 10 | ->       | 20 | ->       | 30 | ->       | 40 | ->      NULL
Addition is  : 100
*/