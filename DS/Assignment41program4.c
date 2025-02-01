#include<stdio.h>
void Display(int iNo)
{
    static char C = 'A';
    static int iCnt = 0;
    
    if(iCnt < iNo)
    {
        printf("%c\t",C);
        C++;
        iCnt++;
        Display(iNo);

    }
}
int main()
{
    int iValue = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}