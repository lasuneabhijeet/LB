#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%5)==0&&(Arr[iCnt]%2)==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
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
   Display(p,iSize);
   free(p);
   return 0;
}