#include<stdio.h>
void Display()
{
    static char C = 'A';
    if(C<='F')
    {
        printf("%c\t",C);
        C++;
        Display();

    }
}
int main()
{
    Display();
    return 0;
}