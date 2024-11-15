#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iSize)
{
    int iCnt = 0,iMax  =0;
    iMax = Arr[0];
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }

    }
    return iMax;
    
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
     
    iRet = Maximum(p,iLength);
    printf("Maximum is :%d\n",iRet);


    
    free(p);


    return 0;

}