// Row = 4
// Col = 3
/*
   *      *      *
   *      *      *
   *      *      *
   *      *      *
*/



#include<stdio.h>
void Display(int iNo1,int iNo2)
{
    int i = 0,j=0;
    for(i = 1;i<=4;i++)
    {
        for(j = 1;j<=3;j++){
        printf("*\t");
        }
    }
    printf("\n");
    

}
int main()
{
    int iValue1= 0,iValue2=0;
    printf("Enter number of Rows :\n");
    scanf("%d",&iValue1);
     printf("Enter number of colum :\n");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}