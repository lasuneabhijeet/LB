#include<stdio.h>
int Factorial(int iNO)
{
    int iCnt =0,EvenFact =1,oddFact=1,Diff=0;
    if(iNO<0)
    {
        iNO = -iNO;
    }
    for(iCnt=1;iCnt<=iNO;iCnt++)
    {
        if(iCnt%2==1)
        {
            oddFact=oddFact*iCnt;

        }
        else
        {
            EvenFact=EvenFact*iCnt;
        }

    }
    Diff=EvenFact-oddFact;

    return Diff;
  
  

}
int main()
{
    int iValue = 0,iRet =0;
    printf("Enter thr number :");
    scanf("%d",&iValue);

    iRet= Factorial(iValue);
    printf("%d",iRet);
    return 0;

}