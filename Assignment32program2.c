#include<stdio.h>
#include<stdbool.h>



bool ChkBit(int iNo)
{
    int iMask =0x20010;
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
    printf("5 th  and 18 thbit is On");
   }
   else
   {
    printf("5 th and 18thbit is oFF");
   }
    return 0;
}