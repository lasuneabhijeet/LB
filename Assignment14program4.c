#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength)
{
     int iCnt = 0,iCount= 0;
    printf("Even elements from the Array are :\n");
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            iCount++;
        }
    }
    return iCount;


}
int main()
{
    int iSize = 0,iRet = 0,iCnt =0;
    int *p = NULL;
    printf("ENter number of elements :\n");
    scanf("%d",&iSize);
    p = (int*)malloc(iSize*sizeof(int));
    if(p ==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements:\n",iSize);
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    iRet = Frequency(p,iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0;
}