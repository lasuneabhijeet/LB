#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
                printf("unable to insert as element is duplicate \n");
                free(newn);
                break;

            }
        }

    }

}
void Inorder(PNODE head)
{
    if(head != NULL)
    {
        Inorder(head->lchild);
        printf("%d\n",head->data);
        Inorder(head->rchild);
        
    }
}
void preorder(PNODE head)
{
    if(head != NULL)
    {
        printf("%d\n",head->data);
        preorder(head->lchild);
       
        preorder(head->rchild);
        
    }
}
void postorder(PNODE head)
{
    if(head != NULL)
    {
        postorder(head->lchild);
       
        postorder(head->rchild);
        printf("%d\n",head->data);
        
    }
}
bool Search(PNODE head,int no)
{
    bool bflag = false;
    while(head != NULL)
    {
        if(no == head->data)
        {
            bflag = true;
            break;
        }
        else if(no > head->data)
        {
            head = head->rchild;
        }
        else if(no < head->data)
        {
            head = head->lchild;
        }

    }
    return bflag;

}
int CountNodes(PNODE head)
{
    static int iCount = 0;

    if(head != NULL)
    {
        iCount++;
        CountNodes(head->lchild);
        CountNodes(head->rchild);
    }
    return iCount;
}
int CountparentNodes(PNODE head)
{
    static int iCount = 0;

    if(head != NULL)
    {
        if((head->lchild) != NULL || (head->rchild) != NULL)
        {
        iCount++;
        }
        CountparentNodes(head->lchild);
        CountparentNodes(head->rchild);
    }
    return iCount;
}
int CountleafNodes(PNODE head)
{
    static int iCount = 0;

    if(head != NULL)
    {
        if((head->lchild) == NULL || (head->rchild) == NULL)
        {
        iCount++;
        }
        CountleafNodes(head->lchild);
        CountleafNodes(head->rchild);
    }
    return iCount;
}


int main()
{
    PNODE first = NULL;
    int iRet = 0;


    Insert(&first,21);
    Insert(&first,11);
    Insert(&first,51);
    Insert(&first,9);
    Insert(&first,18);
    Insert(&first,35);
    Insert(&first,75);

    iRet = CountNodes(first);

    printf("number of node are :%d\n",iRet);

    iRet = CountparentNodes(first);

    printf("number of parent node are :%d\n",iRet);

    iRet = CountleafNodes(first);

    printf("number of Leaf node are :%d\n",iRet);

    
    return 0;
}