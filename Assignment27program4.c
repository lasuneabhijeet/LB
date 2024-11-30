#include<stdio.h>
#include<stdbool.h>
bool ChkVowel(char *str)
{
   bool Flage = false;
   
   while(*str !='\0')
   {
    if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
    {
        Flage = true;
        break;
    }
   
       
    
    str++;
   
   }
   
   return Flage;
    

}
int main()
{
    bool bRet = 0;
 
    char Arr[30];
    printf("Enter the string :\n");
    scanf("%[^'\n]s",Arr);

    bRet = ChkVowel(Arr);
    if(bRet==true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("there is no Vowel");
    }
    
 
   


    return 0;
}