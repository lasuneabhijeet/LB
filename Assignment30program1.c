#include<stdio.h>
#include<stdbool.h>
bool ChkAlpha(char ch)
{
    bool flage = false;
    if(ch>='A'&&ch<='Z')
    {
        flage = true;
        
    }
    else if(ch>='a'&&ch<='z')
    {
        flage = true;
    }

    return flage;
   
   
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

   printf("Enter the Character");
   scanf("%c",&cValue);


  bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("it is character");
    }
    else{
        printf("it is not a character");
    }

    
    
    return 0;

}