#include<stdio.h>
int CountDigits(int iNo)
{
    int iDigit = 0;
    if(iNo<0)//Updator
    {
        iNo = -iNo;
    }
    int icount = 0;
    while (iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit%2 ==0){
       
        icount++;
        }
        iNo = iNo/10;
    }
    return icount;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);
    iRet= CountDigits(iValue);
    printf("Number Even  digits Are :%d",iRet);;

    
    return 0;
}