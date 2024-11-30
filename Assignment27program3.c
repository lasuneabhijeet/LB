#include<stdio.h>
int Difference(char *str)
{
   int iCnt = 0,sicnt=0;
   
   while(*str !='\0')
   {
    if(*str>='A'&&*str<='Z')
    {
        iCnt++;
    }
    else if(*str>='a'&&*str<='z')
    {
        sicnt++;

    }
   
       
    
    str++;
   
   }
   
   return sicnt-iCnt;
    

}
int main()
{
    int iRet = 0;
 
    char Arr[30];
    printf("Enter the string :\n");
    scanf("%[^'\n]s",Arr);

    iRet = Difference(Arr);
    
    printf("number of diffrence charater :%d",iRet);
   


    return 0;
}