#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[],int iSize)
{
    int idigit = 0,iCnt = 0,count=0;
   
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        int iNo= Arr[iCnt];
        
         while (iNo!=0){
           
        idigit=iNo%10;
        count++;
       
        iNo=iNo/10;}
        if(count ==3)
        {
            printf("%d\t",Arr[iCnt]);
        }
        count =0;

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
     
    Digits(p,iLength);
   


    
    free(p);


    return 0;

}