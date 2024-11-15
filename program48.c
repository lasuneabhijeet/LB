#include<stdio.h>
void DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("Factors of %d Are : \n",iNo);
    for(iCnt = 1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\n",iCnt);
        }
    }

}
int main()
{
    int ivalue = 0;
    printf("Enter number :\n");
    scanf("%d",&ivalue);
    DisplayFactors(ivalue);

    return 0;
}
//O(n/2)