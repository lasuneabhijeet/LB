#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iSize)
{
    int iCnt = 0,iMin  =0,Diffre = 0;
    iMin = Arr[0];
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }

    }
     int iMax  =0;
    iMax = Arr[0];
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }

    }
    Diffre = iMax-iMin;
    return Diffre;
    
}
int main()
{
    int *p = NULL;
    int iLength = 0,iCnt =0;
    int iRet = 0;;

    
    printf("ENter number of elements :\n");
    scanf("%d",&iLength);
      
    p = (int*)malloc(iLength*sizeof(int));
   
    printf("Enter the elements :\n");
    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
     
    iRet = Difference(p,iLength);
    printf("Difference is :%d\n",iRet);


    
    free(p);


    return 0;

}