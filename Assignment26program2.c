#include<stdio.h>
void Diplay(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        ch = ch -32;
    }
    else if(ch>='A'&&ch<='Z')
    {
        ch = ch+32;
    }
    else{
        ch = ch;
    }
    printf("%c",ch);
    

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
PS D:\abhijeet\LB> gcc Assignment26program2.c -o myexe
PS D:\abhijeet\LB> .\myexe.exe
Enter the character :
Q
q
PS D:\abhijeet\LB> .\myexe.exe
Enter the character :
m
M
PS D:\abhijeet\LB> .\myexe.exe
Enter the character :
4
4
PS D:\abhijeet\LB> .\myexe.exe
Enter the character :
%
%

*/