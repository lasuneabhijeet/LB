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

int main()
{
    PNODE first = NULL;
    bool bret = false;

    Insert(&first,51);
    Insert(&first,21);
    Insert(&first,101);

    printf("INoder traversal \n");
    Inorder(first);

    printf("preorder traversal \n");
    preorder(first);

    printf("postoder traversal \n");
    postorder(first);

    bret = Search(first,101);
    if(bret == true)
    {
        printf("element is present in bst\n");
    }
    else
    {
        printf("there is no such element in bst\n");
    }
    return 0;
}