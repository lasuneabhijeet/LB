#include<stdio.h>
void DisplayDigits(int iNo)
{
    int iDigit = 0;
    if(iNo<0)//Updator
    {
        iNo = -iNo;
    }
    int count = 0;
    while (iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit%2!=0){
       
        count++;
        }
       
        
        count = count+1;
        iNo = iNo/10;
    }
    printf("total  digits Are :%d",count);
}
int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);
    DisplayDigits(iValue);
    
    return 0;
}