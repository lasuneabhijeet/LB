// INput : 5
// output : a b c d e 
#include<stdio.h>
void Display(int iNo)
{
    int iCnt= 0;
    char ch = 'a';
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n");

}
int main()
{
    int iValue = 0;
    printf("Enter numbeer :\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}