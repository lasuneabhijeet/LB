#include<stdio.h>
int Fact(int iNo)
{
     int fact = 1, iCnt = 0;
   
    
   
    while(iNo > iCnt)
    {
        fact = fact*(iNo-iCnt);
        iCnt++;
        
        
        

    }
    return  fact;
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