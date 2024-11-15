#include<stdio.h>
void Display()
{
    int iCnt = 0;
    for(iCnt= 1;iCnt <= 10; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    
    
    Display(iValue);

    return 0;
}