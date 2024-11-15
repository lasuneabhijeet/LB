#include<stdio.h>
void Display(int *ptr)
{
    int sum = 0;
    printf("Value of the Array are : \n");
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
   
  
    
    


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
    Display(Arr);// Display(100);
   
    return 0;

}