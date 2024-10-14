#include<stdio.h>
void Display(int iValue)
{
     int iCnt = 0;

    for(iCnt =iValue; iCnt >= 0; iCnt--)
    {

        printf("%d\n",iCnt);
    }

}
int main()
{
    int iFrequency = 0;

    printf("Enter the Frequceny :\n");
    scanf("%d",&iFrequency);
    Display(iFrequency);


    return 0;
}