#include<stdio.h>
int Sum(int iNo)
{
    static int sum = 0;
    int Digit = 0;
   
    if(iNo != 0)
    {
        Digit = iNo % 10;
        sum = sum + Digit;
        iNo = iNo / 10;
        
        Sum(iNo);

    }
    return sum;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
   iRet= Sum(iValue);
   printf("%d",iRet);
    return 0;
}