// INput : 5
/*
a b c d 
e f g h 
i j k l
m n o p


*/

#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i =0,j=0;
    char ch = 'a';
    for(i=1;i<=iRow;i,i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%c\t",ch);
            ch++;


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