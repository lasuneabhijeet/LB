#include<stdio.h>
#include<stdlib.h>
int Product(int Arr[],int iSize)
{
  int iCnt = 0,prodeuct = 1;
  for(iCnt =0;iCnt<iSize;iCnt++)
  {
    if(Arr[iCnt]%2==1)
    {
      
      prodeuct= prodeuct*Arr[iCnt];

    }
  }
  return prodeuct;
    
  
}
int main()
{
    int *p = NULL;
    int iSize = 0,iCnt =0,iRet = 0;
    
 
    printf("ENter number of elements :\n");
    scanf("%d",&iSize);
      
    p = (int*)malloc(iSize*sizeof(int));
    if(p ==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
     printf("Enter the elements :\n");
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
   
      iRet= Product(p,iSize);
      printf("Producet is %d",iRet);
     
    
    free(p);


    return 0;

}