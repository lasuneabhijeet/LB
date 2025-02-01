// input = 12345
// output = 5
#include<stdio.h>
int CountDigitR(int iNo)
{
   
   static int iCnt = 0;
    if(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
        CountDigitI(iNo);
    }
    
   return iCnt;

}
int main()
{
    int iValue = 0,iRet = 0;
    printf("ENter the number :\n");
    scanf("%d",&iValue);
    iRet = CountDigitR(iValue);
    printf("number of Digit  Are :%d\n",iRet);
    
    return 0;
}