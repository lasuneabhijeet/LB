#include<stdio.h>
#include<stdbool.h>
bool ChkSmall(char ch)
{
    bool flage = false;
    if(ch>='a'&&ch<='z')
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


  bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("it is  small case character");
    }
    else{
        printf("it is not a small case character");
    }

    
    
    return 0;

}