#include<stdio.h>
int Reverse(int iNo)
{
    static int num = 0;
    
    int digit = 0;
   
    
   
    if(iNo != 0)
    {
        digit = iNo % 10;
        num = num * 10 + digit;
        
        
        iNo = iNo / 10;
        


        
        
        Reverse(iNo);

    }
    return num;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
    iRet= Reverse(iValue);
    printf("%d",iRet);
    return 0;
}