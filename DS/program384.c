#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE head,int no)
{
    PNODE newn  = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*head == NULL)//tree is empty
    {
        *head = newn;

    }
    else // tree contains atleast one node
    {
        temp = *head;
        while(1)
        {
            if(no > temp->data)   //   greater
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;

            }
            else if(no< temp->data)//smaller
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;

            }
            else if(no == temp->data)// identical
            {
                printf("unable to inser as element is duplicate \n");
                free(newn);
                brek;

            }
        }

    }

}

int main()
{
    PNODE first = NULL;

    Insert(&first,51);
    Insert(&first,21);
    Insert(&first,101);
    return 0;
}