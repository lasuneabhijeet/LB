#include<stdio.h>




int ToggleBit(int iNo , int iPos)
{
    int iMask =0x01;
    int iResult = 0;
    iMask = iMask<<(iPos-1);
   
    iResult = iNo ^ iMask;
    return iResult;
   
      
  

}

int main() {
   int iValue = 0,location;
   int iRet = 0;
   printf("Enter the number :");
   scanf("%d",&iValue);
   printf("Enter the position:");
   scanf("%d",&location);
   iRet = ToggleBit(iValue,location);
   printf("modified number is: %d",iRet);
   
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment34program3.c -o myexe
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :10
Enter the position:3
modified number is: 14



*/

