#include<stdio.h>
// a  e  i  o  u

int CountVowels(char *str)// case sensitive
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str=='a' ||*str=='e' ||*str=='i'||*str=='o' || *str=='u')
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
    int iRet =0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowels(Arr);

    printf("Number  is vowels : %d\n",iRet);
    
    return 0;
}