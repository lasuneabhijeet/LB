#include<stdio.h>

void Display(char ch)
{
  int ASCIIValue = (int)ch;

  printf("Decimal:%d\n",ASCIIValue);
  printf("Hexadecimal : 0X%X\n",ASCIIValue);
  printf("Octal:%o\n",ASCIIValue);
  
}
int main()
{
    char cValue = '\0';
    printf("Enter the character");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}