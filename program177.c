#include<stdio.h>


void update(char *str)// Case Sensitive
{
    while (*str != '\0')
    {
        if(*str == 'a')
        {
            *str = 'd';
        }
        str++;
    }
    
    
}

int main()
{
    char Arr[30];
   

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    update(Arr);

    printf("String After Updation is : %s\n",Arr);
       
    
    return 0;
}