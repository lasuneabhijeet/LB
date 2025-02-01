
#include<stdio.h>
int SumDigitI(int iNo)
{
    int iSum = 0;
    while(iNo != 0)
    {
        
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }
    
   return iSum;

}
int main()
{
    int iValue = 0,iRet = 0;
    printf("ENter the number :\n");
    scanf("%d",&iValue);
    iRet = SumDigitI(iValue);
    printf("number of Digit  Are :%d\n",iRet);
    
    return 0;
}