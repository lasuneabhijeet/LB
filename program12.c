#include<stdio.h>

float CircleArea(float fRadius)
{
    float fArea =0.0f;
    fArea = 3.14 *fRadius *fRadius;

    return fArea;

}

//Find Area of the Circle by Takeing the Input from the user 
int main()
{
    float fValue = 0.0f;
    float fResult = 0.0f;

    printf("Enter the Radius of circlr \n");
    scanf("%f",&fValue);//10.5

    fResult = Radius( fValue);
     //     3.14 *10.5 *10.5
    printf("Area of circle is :%f\n",fResult);


    return 0;
}