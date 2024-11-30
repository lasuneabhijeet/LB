#include<stdio.h>
#include<stdbool.h>


bool Count(char *str,char ch)// Case Sensitive
{
    int iCnt = 0;
    bool bFlag =false;
    while(*str != '\0')
    {
        if( *str==ch)
        {
            bFlag= true;
            break;
        }
        str++;
       
    }
    return bFlag;
}

int main()
{
    char Arr[30];
    char cValue='\0';
    bool bRet =false;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the charecter  :\n");
    scanf(" %c",&cValue);


    bRet = Count(Arr,cValue);
    if(bRet==true)
    {
        printf("Character is present in string\n");
    }
    else
    {
        printf("There is no such character\n");
    }

   // printf("Number of occurences : %d\n",iRet);
    
    return 0;
}