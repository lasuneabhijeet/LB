#include<stdio.h>
#include<stdlib.h>
int LastOcc(int Arr[],int iSize,int iNo)
{
    int iCnt = 0,index = 0;
    
    
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
          index=iCnt;
             
             
        }
        
    }
    if(index ==0)
    {
      return -1;
    }
  return index;
    
    
    
   
}
int main()
{
    int *p = NULL;
    int iSize = 0,iCnt =0,iRet = 0,iValue = 0;
    
 
    printf("ENter number of elements :\n");
    scanf("%d",&iSize);
      
    p = (int*)malloc(iSize*sizeof(int));
    if(p ==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter the number that you want to search :\n");
    scanf("%d",&iValue);
     printf("Enter the elements :\n");
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
   
      iRet= LastOcc(p,iSize,iValue);
      if(iRet == -1)
      {
        printf("There is no such number\n");
      }
      else{
        printf("Last occurrence of number is %d\n",iRet);
      }
     
    
    free(p);


    return 0;

}