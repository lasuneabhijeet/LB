#include<stdio.h>
#include<stdbool.h>



bool ChkBit(int iNo)
{
    int iMask =0x1c0;
    int iResult = 0;
    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    return false;
      
  

}

int main() {
   int iValue = 0;
   bool  BRet = false;
   printf("Enter the number :");
   scanf("%d",&iValue);
   BRet = ChkBit(iValue);
   if(BRet== true)
   {
    printf("7th,8th and 9 thbit is On");
   }
   else
   {
    printf("7th,8th and 9 thbit is Off");
   }
    return 0;
}