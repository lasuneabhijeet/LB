#include<stdio.h>
#include<stdbool.h>



bool ChkBit(int iNo)
{
    int iMask =0x80000001;
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
    printf("1th and 32th bit is On");
   }
   else
   {
    printf("1th and 32th bit is Off");
   }
    return 0;
}