#include<stdio.h>




 int OnBit(int iNo)
{
    int iMask =0xf;
    
    int iResult = 0;
    iResult = iNo | iMask;
    return iResult;
    
      
  

}

int main() {
   int iValue = 0;
   int  lRet = 0;
   printf("Enter the number :");
   scanf("%d",&iValue);
   lRet = OnBit(iValue);
   printf("%d",lRet);
   
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment33program5.c -o myexe
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :73
79
*/