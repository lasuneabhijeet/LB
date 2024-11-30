
/*
INput : Row = 5 col = 5
$       $       $       $       $
$       *       *       *       $
$       *       *       *       $
$       *       *       *       $
$       $       $       $       $



*/

#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i =0,j=0;
    
    
    for(i=1;i<=iRow;i,i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i==1||i==iRow||j==1||j==iCol) // first&last row
            {
                printf("$\t");
            }
            else{// between
                printf("*\t");
            }
            
            
        }
        printf("\n");
        
    }
    
}
int main()
{
    int iValue1 = 0,iValue2=0;
    printf("Enter numbeer of rows :\n");
    scanf("%d",&iValue1);
    printf("Enter numbeer of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}