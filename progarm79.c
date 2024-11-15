#include<stdio.h>
#include<stdlib.h>
int Addition(int Arr[],int iSize)
{
    int iSum = 0,iCnt =0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        iSum = iSum+Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0,iCnt =0,iRet = 0;;

    //Step 1 : Accept the number of elements form user
    printf("ENter number of elements :\n");
    scanf("%d",&iLength);
      
    ptr = (int*)malloc(iLength*sizeof(int));
    //Step 3: Accept the value and store into dynamic memory
    printf("Enter the elements :\n");
    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
     //Step 4: perform the operation (logic)
    //Function call
    iRet = Addition(ptr,iLength);
    printf("Addition is :%d\n",iRet);


    //step 5 : Deallocate that memory
    free(ptr);


    return 0;

}
/*
Step 1 : Accept the number of elements form user
Step 2 : Allocate that memory dynamically
Step 3: Accept the value and store into dynamic memory
Step 4: perform the operation (logic)
step 5 : Deallocate that memory
*/

