// iRow = 4
// iCol = 4
/*
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d
   
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j=0;
    
    for(i = 1;i<=iRow;i++) // outer (rows)
    {
        char c='A';
        char csmall = 'a';
        for(j = 1;j<=iCol;j++)//Inner (columns)
        {
            if(i%2==1){
          printf("%c\t",c);
          c++;
            }
            else
            {
                printf("%c\t",csmall);
                csmall++;
            }
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