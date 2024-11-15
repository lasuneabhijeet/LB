#include<stdio.h>
#include<stdlib.h>
int AVerage(int Arr[],int iSize)
{
    int iSum = 0,iCnt =0;
    float iAvg =0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        iSum = iSum+Arr[iCnt];
    }
    iAvg = iSum/iSize;
    return iAvg;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0,iCnt =0;
    float fRet = 0;;

    
    printf("ENter number of elements :\n");
    scanf("%d",&iLength);
      
    ptr = (int*)malloc(iLength*sizeof(int));
   
    printf("Enter the elements :\n");
    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
     
    fRet = AVerage(ptr,iLength);
    printf("Addition is :%d\n",fRet);


    
    free(ptr);


    return 0;

}