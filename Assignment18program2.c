#include<stdio.h>
int DollarToINR(int iNO)
{
    int iCnt =0;
    int INR= 0;
    INR=iNO*70;
    return INR;
  
  

}
int main()
{
    int iValue = 0,iRet =0;
    printf("Enter thr number :");
    scanf("%d",&iValue);

    iRet= DollarToINR(iValue);
    printf("%d",iRet);
    return 0;

}