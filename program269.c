// *  *  *  *

#include<stdio.h>
void DisplayR()
{
    static int iCnt = 1; // Storage class Static
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