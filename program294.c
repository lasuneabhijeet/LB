#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
   static int iCnt = 0;
    if(iCnt<iSize)
    {
      printf("%d\n",Arr[iCnt]);
      iCnt++;
      Display(Arr,iSize);

    }
}
int main()
{
    int *ptr = NULL;
    int iLength = 0,i = 0;
    printf("Enter the number of element :\n");
    scanf("%d",&iLength);
    ptr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter the value :\n");
    for(i = 0;i<iLength;i++)
    {
        scanf("%d",&)
    }

    

    Display(Brr,5);
    return 0;
}