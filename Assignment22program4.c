// iRow = 5
// iCol = 5
/*
1       2       3       4       5
-1      -2      -3      -4      -5
1       2       3       4       5
-1      -2      -3      -4      -5
1       2       3       4       5
   
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j=0;
    
    
    for(i = 1;i<=iRow;i++) // outer (rows)
    {
      int num = 1;
      char c ='a';
        
        for(j = 1;j<=iCol;j++)//Inner (columns)
        {
            
          if(i%2==1)
          {
            printf("%d\t",j);
           
          }
          else 
          {
            printf("%d\t",-j);
            
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