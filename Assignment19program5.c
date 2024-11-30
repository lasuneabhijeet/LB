#include<stdio.h>
void  Pattern(int iNO)
{
    int iCnt =0;
    int iValue = 1;

    if(iNO<0)
    {
        iNO = -iNO;
    }
    for(iCnt=1;iCnt<=iNO;iCnt++)
    {
        printf("%d\t",iCnt*2);


    }


  
  

}
int main()
{
    int iValue = 0,iRet =0;
    printf("Enter thr number :");
    scanf("%d",&iValue);

     Pattern(iValue);
   
    return 0;

}