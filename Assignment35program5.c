#include<stdio.h>




int ToggleBit(int iNo , int iPos1,int iPos2)
{
    int iMask =0x01;
    int iResult = 0;
    while(iPos1<=iPos2){
    iMask = iMask|1<<(iPos1-1);
    iPos1++;
}
   
    iResult = iNo ^ iMask;
    return iResult;
   
      
  

}

int main() {
   int iValue = 0,location1=0,location2=0;
   int iRet = 0;
   printf("Enter the number :");
   scanf("%d",&iValue);
   printf("Enter the position1:");
   scanf("%d",&location1);
   printf("Enter the position2:");
   scanf("%d",&location2);
   iRet = ToggleBit(iValue,location1,location2);
   printf("modified number is: %d",iRet);
   
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment35program5.c -o myexe
PS D:\abhijeet\LB> ./myexe.exe
Enter the number :897
Enter the position1:5
Enter the position2:8
modified number is: 880
*/

