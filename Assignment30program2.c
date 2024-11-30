#include<stdio.h>
#include<stdbool.h>
bool ChkCapital(char ch)
{
    bool flage = false;
    if(ch>='A'&&ch<='Z')
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


  bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("it is  Capital character");
    }
    else{
        printf("it is not a Capital character");
    }

    
    
    return 0;

}