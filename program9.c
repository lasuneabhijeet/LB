#include<stdio.h>

float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;                              //Local variable for result
    fAdd = fValue1 + fValue2;                      // Business Logic
    return fAdd;
}
int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;   //Local variable for input

    printf("Enter the first number :\n");
    scanf("%f",&fNo1);

    printf("Enter the second number :\n");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1,fNo2);                    //Function call

    printf("Addition is : %f\n",fAns);

    return 0;
}