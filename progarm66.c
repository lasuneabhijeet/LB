#include<stdio.h>
int main()
{
    
    int Arr[4];
    int iCnt = 0;
    int iSum = 0;
    

    printf("please enter the value :\n");
    //    1       2      3
    for(iCnt=0;iCnt<4;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);//4
    }
   

    //Logic
         // 1        2     3
    for(iCnt = 0; iCnt<4;iCnt++)
    {
        iSum = iSum +Arr[iCnt];//4
    }
    printf("Sumation of Array is : %d",iSum);

    

    return 0;

}