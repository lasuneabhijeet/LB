#include<stdio.h>
#include<stdbool.h>
bool CheckNUmber(int iNo)
{
   /* if(iNo<0)
    {
        iNo = -iNo;
    }
    if((iNo%5)==0)
    {
        return true;
    }
    else{
        return false;
    }
    */
   int iResult = 0;
   iResult = iNo % 3;
   if(iResult == 0)
   {
    return true;
   }
   else{
    return false;
   }

}
    
int main()
{
    int iValue = 0;
    bool bFlag = false;
    printf("Enter number :\n");

    scanf("%d",&iValue);
    
    bFlag = CheckNUmber(iValue);
    if(bFlag == true)
    {
        printf("%d is divisible by 3\n",iValue);
    }
    else{
        printf("%d is not divisible by 3\n",iValue);
    }

    return 0;
}