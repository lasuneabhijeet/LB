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
int SearchFirstOcc(PNODE head, int no) {
    int iCount = 1;  
    while (head != NULL) {
        if (head->data == no) {
            return iCount;  
        }
        head = head->Next;
        iCount++;
       
    }
    return -1;  
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
    printf("enter the number that want to search:\n");
    scanf("%d",&no);

    Display(First);
    
    iRet = SearchFirstOcc(First,no);
    printf("position : %d",iRet);
   

    return 0;

    
}
/*
PS D:\abhijeet\LB\DS> gcc Assignment44program1.c -o myexe
PS D:\abhijeet\LB\DS> ./myexe.exe
enter the numberof element  want :
7
Enter the elements:
70
60
50
40
30
20
10
enter the number that want to search:
30
| 10 | ->       | 20 | ->       | 30 | ->       | 40 | ->      | 50 | ->        | 60 | ->       | 70 | ->       NULL
position : 3
*/