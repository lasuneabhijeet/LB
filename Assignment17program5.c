#include<stdio.h>
void Pattern(int iNO)
{
    int iCnt =0;
   
    for(iCnt =1;iCnt<=5;iCnt++)
    {
        
        printf("%d\t",iCnt*iNO);
        
    }

}
int main()
{
    int iValue = 0;
    printf("Enter thr number :");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;

}