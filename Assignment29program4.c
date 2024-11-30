#include<stdio.h>



int LastChar(char *str,char ch)
{
  int iCnt = 0,index = -1;
    while (*str != '\0')
    {
        if(*str==ch)
        {
          index = 0;
          index=iCnt;
        
        }
        str++;
        iCnt++;
    }
    return index;
    
    
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;
   

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);
    printf("Enter the character:\n");
    scanf(" %c",&cValue);
     iRet = LastChar(Arr,cValue);

     printf("Character location is %d",iRet);

    

    
       
    
    return 0;
}