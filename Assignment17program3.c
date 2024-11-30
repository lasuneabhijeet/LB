#include<stdio.h>
void Pattern(int iNO)
{
    int iCnt =0;
   
    for(iCnt =-iNO;iCnt<=iNO;iCnt++)
    {
        
        printf("%d\t",iCnt);
        
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