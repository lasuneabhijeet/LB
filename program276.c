// 4
//  4   3   2   1
#include<stdio.h>
void DisplayR(int iNo)
{
    
   if(iNo>=1)
   {
    printf("%d\n",iNo);
    iNo--;
    DisplayR(iNo);
   }

}
int main()
{
    int iValue = 0;
    printf("ENter the Frequency :\n");
    scanf("%d",&iValue);
    DisplayR(iValue);
    printf("End of main\n");
    
    return 0;
}