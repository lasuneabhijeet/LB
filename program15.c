/*
START
    Accept the percentage from user
    if percentage are less than 40 then display Fail
    And if it is greater than or equal to 40 then display pass






*/


#include<stdio.h>
void DisplayResult(float fPercentage)
{
    if(fPercentage >= 40.000f)
    {
        printf("you are pass\n");
    }
    else
    {
    printf("you are fail \n");
     }
}
int main()
{
    float fvalue = 0.0;
    printf("Enter the percentage :\n");
    scanf("%f",&fvalue);

    DisplayResult(fvalue);

    return 0;
}