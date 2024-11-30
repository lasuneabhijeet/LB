#include<stdio.h>
void Pattern(int iNO)
{
    int iCnt =0;
    if(iNO<0)
    {
        iNO = -iNO;
    }
   
    for(iCnt =1;iCnt<=2*iNO;iCnt++)
    {
        if(iCnt<=iNO)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
        
        
        
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