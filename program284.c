
#include<stdio.h>
int CountEvenDigitsR(int iNo)
{
     static int iCnt = 0;
     int iDigit = 0;
    if(iNo != 0)
    {
        
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
        CountEvenDigitsR(iNo);
    }
    
   return iCnt;

}
int main()
{
    int iValue = 0,iRet = 0;
    printf("ENter the number :\n");
    scanf("%d",&iValue);
    iRet = CountEvenDigitsR(iValue);
    printf("Even of Digit  Are :%d\n",iRet);
    
    return 0;
}