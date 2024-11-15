#include<stdio.h>
int  SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSum = iSum+iCnt;
           
        }
    }
    return iSum;

}
int main()
{
    int ivalue = 0;
    int iRet = 0;
    printf("Enter number :\n");
    scanf("%d",&ivalue);
    iRet = SumFactors(ivalue);
    printf("Sumation of Factors :%d",iRet);

    return 0;
}
//O(n/2)