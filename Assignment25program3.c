// iRow = 6
// iCol = 6
/*
*       *       *       *       *       *
*                               *       *
*                       *               *
*               *                       *
*       *                               *
*       *       *       *       *       *
   
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0,j=0;
    
    
    for(i = 1;i<=iRow;i++) // outer (rows)
    {
      //int num = i;
      
        
        for(j = 1;j<=iCol;j++)//Inner (columns)
        {
            if(j==iCol-i+1||i==1||i==iRow||j==1||j==iCol)
            {
                printf("*\t");
            }
            else{
                printf(" \t");
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