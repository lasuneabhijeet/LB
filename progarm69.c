#include<stdio.h>
void Display(int *ptr,int Size)
{
    int iCnt = 0;
    printf("Value of the Array are : \n");
    for(iCnt = 0;iCnt <Size;iCnt++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
  
}
int main()
{
    
    int Arr[4];
    int iCnt = 0;

    printf("please enter the value :\n");
    //    1       2      3
    for(iCnt=0;iCnt<4;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);//4
    }
    Display(Arr,4);// Display(100);
   
    return 0;

}