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
void DisplayLarge(PNODE head)
{
    int Digit = 0;
    while (head != NULL) 
    {
        int lar=0;
        int no =head->data;
        while(no != 0)
        {
            Digit = no % 10;
           if(Digit>lar)
           {
            lar = Digit;
           }
            
            no = no /10;
            
        }
        printf("%d\t",lar);
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
     DisplayLarge(First);
   

    return 0;

    
}
/*
PS D:\abhijeet\LB\DS> gcc Assignment46program5.c -o myexe
PS D:\abhijeet\LB\DS> ./myexe.exe
enter the numberof element  want :
5
Enter the elements:
123
678
098
567
999
| 999 | ->      | 567 | ->      | 98 | ->       | 678 | ->     | 123 | ->       NULL
9       7       9       8       3

*/