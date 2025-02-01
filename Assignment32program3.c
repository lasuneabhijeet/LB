#include<stdio.h>
#include<stdbool.h>



bool ChkBit(int iNo)
{
    int iMask =0x8104040;
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
    printf("7th,15th,21th and 28 thbit is On");
   }
   else
   {
    printf("7th,15th,21th and 28 thbit is Off");
   }
    return 0;
}