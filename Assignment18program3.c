#include<stdio.h>
int EvenFactor(int iNO)
{
    int iCnt =0,Fact =1;
    if(iNO<0)
    {
        iNO = -iNO;
    }
    for(iCnt=1;iCnt<=iNO;iCnt++)
    {
        if(iCnt%2==0)
        {
            Fact=Fact*iCnt;

        }
    }
    return Fact;
  
  

}
int main()
{
    int iValue = 0,iRet =0;
    printf("Enter thr number :");
    scanf("%d",&iValue);

    iRet= EvenFactor(iValue);
    printf("%d",iRet);
    return 0;

}