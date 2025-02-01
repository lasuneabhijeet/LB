// 5
//  1 +  2 +  3 +  4  +   5
#include<stdio.h>
int Addition(int iNo)
{
    int iCnt = 1;
    int iSum = 0;
   
   while(iCnt<=iNo)
   {
    iSum = iSum+iCnt;
    iCnt++;
   }
   return iSum;

}
int main()
{
    int iValue = 0,iRet = 0;
    printf("ENter the Frequency :\n");
    scanf("%d",&iValue);
    iRet = Addition(iValue);
    printf("Addition is :%d\n",iRet);
    
    return 0;
}