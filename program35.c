#include<stdio.h>

void Diplay(int iValue)
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt <= iValue)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }

}
int main()
{
    
    int iFrequency = 0;
    printf("Enter the frequeny :\n");
    scanf("%d",&iFrequency);
    Display(iFrequency);
  
    return 0;
}