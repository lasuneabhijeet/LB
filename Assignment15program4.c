#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iSize,int iStart,int End)
{
    int iCnt = 0;
    
    
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]>iStart)&&(End>Arr[iCnt]))
        {
          printf(" %d\t",Arr[iCnt]);
        }
       
        
    }
    
    
    
    
   
}
int main()
{
    int *p = NULL;
    int iSize = 0,iCnt =0,iRet = 0,iValue1= 0,iValue2 =0;
    
 
    printf("ENter number of elements :\n");
    scanf("%d",&iSize);
      
    p = (int*)malloc(iSize*sizeof(int));
    if(p ==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter the first number:\n");
    scanf("%d",&iValue1);
    printf("Enter the end number :\n");
    scanf("%d",&iValue2);
     printf("Enter the elements :\n");
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
   
    Range(p,iSize,iValue1,iValue2);
      
     
    
    free(p);


    return 0;

}