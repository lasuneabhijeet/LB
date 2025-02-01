#include<stdio.h>
#include<stdbool.h>


bool ChkBit(int iNo,int iPos1,int iPos2) {
    int iMask = 0x1,iMask1 = 0,iMask2 = 0;
    iMask1 = iMask<<(iPos1-1);
    iMask2 = iMask<<(iPos2-1);
    iMask = iMask1 | iMask2;
    int iResult = 0;
    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else if(iResult == iMask1)
    {
        return true;
    }
    else if(iResult == iMask2)
    {
        return true;
    }
    else{
        return false;
    }
   
 }
int main() {
   int iValue = 0,location1=0,location2=0;
   
   bool  bRet = 0;
   printf("Enter the number :");
   scanf("%d",&iValue);

   printf("enter the first position :");
   scanf("%d",&location1);

   printf("enter the second position :");
   scanf("%d",&location2);
  
   bRet = ChkBit(iValue,location1,location2);

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
PS D:\abhijeet\LB> gcc Assignment35program4.c -o myexe
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :10
enter the first position :3
enter the second position :7
Bit is Off
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :10
enter the first position :2
enter the second position :7
Bit is ON



*/


