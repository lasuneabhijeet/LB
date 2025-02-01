#include<stdio.h>
int Max(int iNo)
{
    static int lar = 1;
    static int iCnt = 0;
    int digit = 0;
   
    
   
    if(iNo != 0)
    {
        digit = iNo % 10;
        if(digit > lar )
        {
        lar = digit;
        }
        
        iNo = iNo / 10;
        


        
        
        Max(iNo);

    }
    return lar;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
    iRet= Max(iValue);
    printf("%d",iRet);
    return 0;
}