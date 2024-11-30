#include<stdio.h>

void Reverse(char *str)
{
    char *p = str;
    while(*p !='\0')
    {
       
        p++;
    }
    p--;
    while(p>=str)
    {
        printf("%c\t",*p);
        p--;
    }
}
int main()
{
   
 
    char Arr[30];
    printf("Enter the string :\n");
    scanf("%[^'\n]s",Arr);

   Reverse(Arr);
  
 
   


    return 0;
}