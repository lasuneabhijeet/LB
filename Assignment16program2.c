#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[],int iSize)
{
    int iCnt = 0,iMin  =0;
    iMin = Arr[0];
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }

    }
    return iMin;
    
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
     
    iRet = Minimum(p,iLength);
    printf("Minimum is :%d\n",iRet);


    
    free(p);


    return 0;

}