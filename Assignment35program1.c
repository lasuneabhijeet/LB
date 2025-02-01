#include<stdio.h>
#include<stdbool.h>


 int CountOne(int iNo) {
    int count = 0; 

    
    while (iNo > 0) {
        if (iNo & 1) { 
            count++;      
        }
        iNo = iNo >> 1; 
    }

    return count

int main() {
   int iValue = 0;
   int  lRet = 0;
   printf("Enter the number :");
   scanf("%d",&iValue);
   lRet = CountOne(iValue);
   printf("%d",lRet);
   
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment35program1.c -o myexe
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :11
3


*/


