#include<stdio.h>
int Mult(int iNo)
{
    static int mul = 1;
    static int iCnt = 0;
    int digit = 0;
   
    
   
    if(iNo != 0)
    {
        digit = iNo % 10;
        if(digit != 0)
        {
        mul = mul * digit;
        }
        
        iNo = iNo / 10;
        


        
        
        Mult(iNo);

    }
    return mul;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
    iRet= Mult(iValue);
    printf("%d",iRet);
    return 0;
}