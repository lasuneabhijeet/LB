// iRow = 4
// iCol = 4
/*
A       B       C       D
A       B       C       D
A       B       C       D
A       B       C       D
   
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j=0;
    
    for(i = 1;i<=iRow;i++) // outer (rows)
    {
        char c='A';
        for(j = 1;j<=iCol;j++)//Inner (columns)
        {
          printf("%c\t",c);
          c++;
        }
        printf("\n");
    }
    
    

}
int main()
{
    int iValue1= 0,iValue2=0;
    printf("Enter number of Rows and columns :\n");
    scanf("%d %d",&iValue1,&iValue2);
     //printf("Enter number of columns :\n");
    //scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}