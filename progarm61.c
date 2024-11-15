#include<stdio.h>
int Revers(int iNo)
{
    int iDigit = 0,iRev = 0;
    if(iNo<0)// if input is negative
    {
        iNo = -iNo;//conver it to positive
    }
    while (iNo>0)
    {
        iDigit = iNo%10;
        iRev = iRev*10+iDigit;

        
        iNo = iNo/10;
    }
    return iRev;
    

}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
    iRet = Revers(iValue);
    printf("REvers number is :%d",iRet);
    return 0;
}