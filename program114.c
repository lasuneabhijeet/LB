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
    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");

    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");

    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");
    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");
    
    

}
int main()
{
    int iValue1= 0,iValue2;
    printf("Enter number of Rows :\n");
    scanf("%d",&iValue1);
     printf("Enter number of colum :\n");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}