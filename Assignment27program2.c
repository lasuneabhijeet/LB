#include<stdio.h>
int CountCapital(char *str)
{
   int iCnt = 0;
   
   while(*str !='\0')
   {
   
       if(*str>='a'&&*str<='z')
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
    
    printf("number of small charater :%d",iRet);
   


    return 0;
}