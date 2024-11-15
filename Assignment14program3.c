#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool check(int Arr[],int iSize)
{
    int iCnt = 0;
    bool bFlag = false;
    
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
             bFlag = true;
             break;
        }
        
    }
  return bFlag;
    
    
    
   
}
int main()
{
    int *p = NULL;
    int iLength = 0,iCnt =0,iRet = 0,iValue = 0;
    bool bRet = false;

 
    printf("ENter number of elements :\n");
    scanf("%d",&iLength);
      
    p = (int*)malloc(iLength*sizeof(int));
    if(p ==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
     printf("Enter the elements :\n");
    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    
      bRet= check(p,iLength);
      if(bRet == true)
      {
        printf("11 is present \n");
      }
      else{
        printf("11 is not present:\n");
      }
     
    
    free(p);


    return 0;

}