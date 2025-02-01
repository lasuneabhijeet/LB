#include<stdio.h>
int Fact(int iNo)
{
    static int fact = 1;
    static int iCnt = 0;
   
    
   
    if(iNo > iCnt)
    {
        
        fact = fact *(iNo-iCnt);
        iCnt++;
        Fact(iNo);

    }
    return fact;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
    iRet= Fact(iValue);
    printf("%d",iRet);
    return 0;
}