#include<stdio.h>
void Display(char *str)
{
    printf("Entered String is :\n");
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }

}
int main()
{
    char Arr[30];
    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);
    Display(Arr);
    return 0;
}