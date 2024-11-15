#include<stdio.h>
int SumEvenDigit(int iNo)
{
    int iDigit = 0,iSum = 0;
    if(iNo<0)// if input is negative
    {
        iNo = -iNo;//conver it to positive
    }
    while (iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit%2==0)
        {
        
            iSum = iSum+iDigit;
        }
        iNo = iNo/10;
    }
    return iSum;
    

}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
    iRet = SumEvenDigit(iValue);
    printf("Summation Even  of DIgit :%d",iRet);
    return 0;
}