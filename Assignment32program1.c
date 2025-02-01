#include<stdio.h>
#include<stdbool.h>



bool ChkBit(int iNo)
{
    int iMask =0x4000;
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
    printf("15 th bit is On");
   }
   else
   {
    printf("15 th bit is oFF");
   }
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment32program1.c -o myexe
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :16452
15 th bit is On
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :12
15 th bit is oFF
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :49216
15 th bit is On

0000 0000 0000 0000 0000 0000 0000 0000
0     0      0    0  4    0     0    0

0x4000

*/

