#include<stdio.h>
#include<stdbool.h>


bool ChkChar(char *str,char ch)
{
  bool Flage = false;
    while (*str != '\0')
    {
        if(*str==ch)
        {
           Flage=true;
           break;
        }
        str++;
    }
    return Flage;
    
    
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;
   

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);
    printf("Enter the character:\n");
    scanf(" %c",&cValue);
     bRet = ChkChar(Arr,cValue);

     if(bRet== true)
     {
        printf("Character found");
     }
     else
     {
        printf("Character not found");
     }

    

    
       
    
    return 0;
}