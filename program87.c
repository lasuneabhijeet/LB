#include<stdio.h>
#include<stdlib.h>
void AdditionEvenOdd(int Arr[],int iSize)
{
    int iCnt = 0,iEvenSum= 0,iOddSum =0;
    printf("Even elements from the Array are :\n");
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEvenSum = iEvenSum+Arr[iCnt];
        }
    
    else{
        iOddSum = iOddSum+Arr[iCnt];
    }
    }
    printf("Addition of Even element :%d\n",iEvenSum);
    printf("Addition of Odd Element :%d\n",iOddSum);

    
   
}
int main()
{
    int *ptr = NULL;
    int iLength = 0,iCnt =0,iRet = 0;;

 
    printf("ENter number of elements :\n");
    scanf("%d",&iLength);
      
    ptr = (int*)malloc(iLength*sizeof(int));
     printf("Enter the elements :\n");
    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    AdditionEvenOdd(ptr,iLength);
     
    


    
    free(ptr);


    return 0;

}