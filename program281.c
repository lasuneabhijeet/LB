
#include<stdio.h>
int CountDigitI(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
        
        iCnt++;
        iNo = iNo / 10;
    }
    
   return iCnt;

}
int main()
{
    int iValue = 0,iRet = 0;
    printf("ENter the number :\n");
    scanf("%d",&iValue);
    iRet = CountDigitI(iValue);
    printf("number of Digit  Are :%d\n",iRet);
    
    return 0;
}