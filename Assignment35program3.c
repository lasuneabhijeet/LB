#include<stdio.h>
#include<stdbool.h>


bool ChkBit(int iNo) {
    int iMask = 0x900;
    int iResult = 0;
    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else if(iResult == 0x800)
    {
        return true;
    }
    else if(iResult == 0x100)
    {
        return true;
    }
    else{
        return false;
    }
   
 }
int main() {
   int iValue = 0;
   
   bool  bRet = 0;
   printf("Enter the number :");
   scanf("%d",&iValue);
  
   bRet = ChkBit(iValue);

   if(bRet == true)
   {
    printf("Bit is ON");
   }
   else
   {
    printf("Bit is Off");
   }
   
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment35program3.c -o myexe
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :257
Bit is ON
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :2048
Bit is ON
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :528
Bit is Off



*/


