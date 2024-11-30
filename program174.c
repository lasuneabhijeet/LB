#include<stdio.h>


int Count(char *str,char ch)// Case Sensitive
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if( *str==ch)
        {
            iCnt++;
        }
        str++;
       
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    char cValue='\0';
    int iRet =0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the charecter  :\n");
    scanf("%c",&cValue);


    iRet = Count(Arr,cValue);

    printf("Number of m : %d\n",iRet);
    
    return 0;
}