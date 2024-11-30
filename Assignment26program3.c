#include<stdio.h>
void Diplay(char ch)
{
    int iCnt = 0;
    if(ch>='a'&&ch<='z')
    {
        for(iCnt = ch;iCnt>='a';iCnt--)
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else if(ch>='A'&&ch<='Z')
    {
        for(iCnt = ch;iCnt<='Z';iCnt++)
        {
            printf("%c\t",ch);
            ch++;
        }
    }
    else
    {
        printf("Inavlid input");
    }

}
int main()
{
    char cValue = '\0';
    printf("Enter the character :\n");
    scanf("%c",&cValue);

    Diplay(cValue);
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment26program3.c -o myexe
PS D:\abhijeet\LB> .\myexe.exe
Enter the character :
Q
Q       R       S       T       U       V       W       X       Y       Z
PS D:\abhijeet\LB> .\myexe.exe
Enter the character :

Inavlid input
PS D:\abhijeet\LB> .\myexe.exe
Enter the character :
m
m       l       k       j       i       h       g       f       e       d       c       b       a

*/