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
void Reverse(PPNODE Head)
{
    PNODE current = *Head;
    
   
    while (current != NULL)
    {
        int no = current->data;
        int reversed = 0;

        
        while (no != 0)
        {
            reversed = reversed * 10 + (no % 10);  
            no = no / 10;  
        }
        
        
        current->data = reversed;
        
       
        printf("| %d | ->\t", current->data);
        
        
        current = current->Next;
    }

    printf("NULL\n");
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
     Reverse(&First);
   

    return 0;

    
}
/*

PS D:\abhijeet\LB\DS> gcc Assignment46program1.c -o myexe
PS D:\abhijeet\LB\DS> ./myexe.exe
enter the numberof element  want :
6
Enter the elements:
11
28
17
41
6
89
| 89 | ->       | 6 | ->        | 41 | ->       | 17 | ->      | 28 | ->        | 11 | ->       NULL
| 98 | ->       | 6 | ->        | 14 | ->       | 71 | ->      | 82 | ->        | 11 | ->       NULL
*/