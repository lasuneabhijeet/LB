#include<stdio.h>




 int OffBit(int iNo)
{
    int iMask =0x40;
    iMask = ~iMask;
    int iResult = 0;
    iResult = iNo & iMask;
    return iResult;
    
      
  

}

int main() {
   int iValue = 0;
   int  lRet = 0;
   printf("Enter the number :");
   scanf("%d",&iValue);
   lRet = OffBit(iValue);
   printf("%d",lRet);
   
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment33program1.c -o myexe
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :79
15
*/