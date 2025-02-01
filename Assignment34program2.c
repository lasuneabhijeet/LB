#include<stdio.h>
#include<stdbool.h>



int OffBit(int iNo , int iPos)
{
    int iMask =0x01;
    int iResult = 0;
    iMask = iMask<<(iPos-1);
    iMask = ~iMask;
    iResult = iNo & iMask;
    return iResult;
   
      
  

}

int main() {
   int iValue = 0,location;
   int iRet = 0;
   printf("Enter the number :");
   scanf("%d",&iValue);
   printf("Enter the position: ");
   scanf("%d",&location);
   iRet = OffBit(iValue,location);
   printf("modified number is :%d",iRet);
   
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment34program2.c -o myexe
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :10
Enter the position2
modified number is 8



*/

