// Row = 4
// Col = 4
/*
   0 2 3 4
   1 0 3  4
   1 2 0 4
   1 2 3 0

*/




#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i = 0,j=0;
    for(i = 1;i<=iRow;i++) // outer (rows)
    {
        for(j = 1;j<=iCol;j++)//Inner (columns)
        {
        if(i ==j)
        {
            printf("0\t");
        }
        else{
            printf("%d\t",j);
        }
        }
        printf("\n");
    }
    
    

}
int main()
{
    int iValue1= 0,iValue2=0;
    printf("Enter number of Rows :\n");
    scanf("%d",&iValue1);
     printf("Enter number of columns :\n");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}