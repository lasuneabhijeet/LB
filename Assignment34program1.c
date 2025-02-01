#include<stdio.h>
#include<stdbool.h>



bool ChkBit(int iNo , int iPos)
{
    int iMask =0x01;
    int iResult = 0;
    iMask = iMask<<(iPos-1);
    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    return false;
      
  

}

int main() {
   int iValue = 0,location;
   bool  BRet = false;
   printf("Enter the number :");
   scanf("%d",&iValue);
   printf("Enter the position");
   scanf("%d",&location);
   BRet = ChkBit(iValue,location);
   if(BRet== true)
   {
    printf("%d bit is true(ON) ",location);
   }
   else
   {
    printf("%dth bit is false( oFF)",location);
   }
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment34program1.c -o myexe
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :10
Enter the position2
2 bit is true(ON)
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :10
Enter the position3
3th bit is false( oFF)



*/

