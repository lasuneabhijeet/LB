#include<stdio.h>
void Display()
{
    static char C = 'a';
    if(C<='f')
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