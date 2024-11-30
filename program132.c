// INput : 5
// output : a 1 b 2 c 3 d 4 e 5 
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


        }
        printf("\n");
        ch++;
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