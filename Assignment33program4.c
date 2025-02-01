#include<stdio.h>




 int ToggleBit(int iNo)
{
    int iMask =0x240;
    
    int iResult = 0;
    iResult = iNo ^ iMask;
    return iResult;
    
      
  

}

int main() {
   int iValue = 0;
   int  lRet = 0;
   printf("Enter the number :");
   scanf("%d",&iValue);
   lRet = ToggleBit(iValue);
   printf("%d",lRet);
   
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment33program4.c -o myexe
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :137
713
*/