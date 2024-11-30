#include<stdio.h>
int CountCapital(char *str)
{
   int iCnt = 0;
   
   while(*str !='\0')
   {
    if(*str>='A' && *str<='Z')
    {
        iCnt++;
    }
    str++;
   }
   return iCnt;
    

}
int main()
{
    int iRet = 0;
 
    char Arr[30];
    printf("Enter the string :\n");
    scanf("%[^'\n]s",Arr);

    iRet = CountCapital(Arr);
    
    printf("number of capital charater :%d",iRet);
   


    return 0;
}