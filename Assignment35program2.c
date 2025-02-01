#include<stdio.h>
#include<stdbool.h>


 void CommonBit(int iNo1,int iNo2) {
    int count1 = 0; 

    
    while (iNo1 > 0) {
        if (iNo1 & 1) { 
            count1++;      
        }
        iNo1 = iNo1 >> 1; 
    }
    printf("%d\n",count1);
    int count2 = 0; 

    
    while (iNo2 > 0) {
        if (iNo2 & 1) { 
            count2++;      
        }
        iNo2 = iNo2 >> 1; 
    }
    printf("%d\n",count2);
 }

    

int main() {
   int iValue1 = 0;
   int iValue2 = 0;
   int  lRet = 0;
   printf("Enter the number1 :");
   scanf("%d",&iValue1);
   printf("Enter the number2 :");
   scanf("%d",&iValue2);
   CommonBit(iValue1,iValue2);
   
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment35program2.c -o myexe
PS D:\abhijeet\LB> ./myexe.exe
Enter the number1 :10
Enter the number2 :15
2
4


*/


