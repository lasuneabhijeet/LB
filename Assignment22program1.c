// iRow = 4
// iCol = 4
/*
1       2       3       4
5       6       7       8
9       1       2       3
4       5       6       7
   
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j=0;
    int num = 1;
    
    for(i = 1;i<=iRow;i++) // outer (rows)
    {
        
        for(j = 1;j<=iCol;j++)//Inner (columns)
        {
            
          printf("%d\t",num);
          num++;
          if(num>=10)
          {
            num=1;
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