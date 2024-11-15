#include<stdio.h>
#include<stdlib.h>
void DigitsSum(int Arr[],int iSize)
{
    int idigit = 0,iCnt = 0,iSum=0;
   
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        int iNo= Arr[iCnt];
        
         while (iNo!=0){
           
        idigit=iNo%10;
        iSum = iSum+idigit;
        
       
        iNo=iNo/10;}
        printf("%d\t",iSum);
        iSum =0;
        
      

    }
    
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
     
    DigitsSum(p,iLength);
   


    
    free(p);


    return 0;

}