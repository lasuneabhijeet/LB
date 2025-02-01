// *  *  *  *

#include<stdio.h>
void DisplayR()
{
    int iCnt = 1;  //Storage class
   if(iCnt<=4)
   {
    printf("*\n");
    iCnt++;
    DisplayR(); // Recursive call
   }

}
int main()
{
    DisplayR();
    
    return 0;
}