#include<stdio.h>
void Display()
{
    static int iNo = 1;
    if(iNo<=5)
    {
        printf("%d\t",iNo);
        iNo++;
        Display();

    }
}
int main()
{
    Display();
    return 0;
}