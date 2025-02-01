#include<stdio.h>
void Display()
{
    static int iNo = 5;
    if(iNo>0)
    {
        printf("%d\t",iNo);
        iNo--;
        Display();

    }
}
int main()
{
    Display();
    return 0;
}