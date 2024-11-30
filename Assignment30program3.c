#include<stdio.h>
#include<stdbool.h>
bool ChkDigit(char ch)
{
    bool flage = false;
    if(ch>='0'&&ch<='9')
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


  bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("it is  Digit");
    }
    else{
        printf("it is not a Digit");
    }

    
    
    return 0;

}