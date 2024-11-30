#include<stdio.h>
void DisplaySchedule(char chDiv)
{
    if(chDiv=='A'||chDiv=='a')
    {
        printf("your exam at 7 AM");
    }
    else if (chDiv=='B'||chDiv=='b')
    {
        printf("your exam at 8.30 AM");
        
    }
    else if (chDiv=='C'||chDiv=='c')
    {
        printf("your exam at 9.20 AM");
        
    }
    else if(chDiv=='D'||chDiv=='d')
    {
        printf("your exam at 10.300 AM");
    }
    else{
        printf("not such Division ");
    }
    
    
    
    
    
   
   
}
int main()
{
    char cValue = '\0';
    

   printf("Enter the Character");
   scanf("%c",&cValue);

   DisplaySchedule(cValue);


  

    
    
    return 0;

}