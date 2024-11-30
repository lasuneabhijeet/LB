#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    bool Flage= false;
    if(ch =='!'||ch =='@'||ch =='#'||ch =='$'||ch =='%'||ch =='^'||ch =='&'||ch =='*')
    {
        Flage = true;
        
    }
    return Flage;

}
int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet=ChkSpecial(cValue);
    if(bRet==true)
    {
        printf("it is special character ");
    }
    else{
        printf("it is not a special character");
    }
    return 0;
}
/*
PS D:\abhijeet\LB> gcc Assignment26program4.c -o myexe
PS D:\abhijeet\LB> .\myexe.exe
Enter the character :
%
it is special character
PS D:\abhijeet\LB> .\myexe.exe
Enter the character :
d
it is not a special character

*/