#include<stdio.h>
#include<stdbool.h>
int  CheckPerfect(int iNo)
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
    if(iSum == iNo)
    {
        return true;
    }
    else{
        return false;

    }

}
int main()
{
    int ivalue = 0;
    int bRet = 0;
    printf("Enter number :\n");
    scanf("%d",&ivalue);
    bRet = CheckPerfect(ivalue);
    if(bRet == true)
    {
        printf("%d is a perfect number \n",ivalue);
    }
    else{
        printf("%d is  not a perfect number \n",ivalue);

    }

    return 0;
}
//O(n/2)