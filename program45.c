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
  
   if(((iNo % 3)==0) && ((iNo % 5)==0))
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
        printf("%d is divisible by 3And 5\n",iValue);
    }
    else{
        printf("%d is not divisible by 3 or 5\n",iValue);
    }

    return 0;
}