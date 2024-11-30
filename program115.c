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
    int iCnt =0;


    for(iCnt = 1;iCnt<=3;iCnt++)
    {
        printf("*\t");
    }

    printf("\n");

    for(iCnt = 1;iCnt<=3;iCnt++)
    {
        printf("*\t");
    }

    printf("\n");
    for(iCnt = 1;iCnt<=3;iCnt++)
    {
        printf("*\t");
    }

    printf("\n");
    for(iCnt = 1;iCnt<=3;iCnt++)
    {
        printf("*\t");
    }

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