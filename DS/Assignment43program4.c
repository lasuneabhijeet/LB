#include<stdio.h>
int Min(int iNo)
{
    static int small = 10;
    
    int digit = 0;
   
    
   
    if(iNo != 0)
    {
        digit = iNo % 10;
        if(digit < small )
        {
         small = digit;
        }
        
        iNo = iNo / 10;
        


        
        
        Min(iNo);

    }
    return small;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
    iRet= Min(iValue);
    printf("%d",iRet);
    return 0;
}