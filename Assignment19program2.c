#include<stdio.h>
void  Pattern(int iNO)
{
    int iCnt =0;
    int iValue = iNO;

    if(iNO<0)
    {
        iNO = -iNO;
    }
    for(iCnt=1;iCnt<=2*iNO;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("#\t");
        }
        else{

            printf("%d\t",iValue);
            iValue--;
        }
        


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