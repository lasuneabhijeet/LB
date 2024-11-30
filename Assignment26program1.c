#include<stdio.h>

void DisplayASCII()
{
    char ch ='\0';
 printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
 printf("                        \n");
 for( ch = 0; ch <=255;ch++)
 {
    printf(" %s\t%d\t%X\t\t%o\n",ch,ch,ch,ch);
 }
}
int main()
{
    DisplayASCII();
    return 0;
}