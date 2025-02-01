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
void DisplayPrime(PNODE head)
{
      
    while(head != NULL)
    {
        int count=0;
    
        for(int i = 1;i<=(head->data);i++)
        {

        
        if((head->data)%i ==0 )
        {
            count++;
        }
        }
        if(!(count > 2) && !(count < 2))
        {
            printf("%d\t",head->data);
        }
        
        
        head = head->Next;
    }
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
    DisplayPrime(First);
   

    return 0;

    
}
/*
PS D:\abhijeet\LB\DS> gcc Assignment45program2.c -o myexe
PS D:\abhijeet\LB\DS> ./myexe.exe
enter the numberof element  want :
6
Enter the elements:
89
22
41
17
20
11
| 11 | ->       | 20 | ->       | 17 | ->       | 41 | ->      | 22 | ->        | 89 | ->       NULL
11      17      41      89

*/