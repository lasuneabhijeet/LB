#include<stdio.h>

float Radius(float Rad)
{   
    float Area = 0;
    float Area = 3.14 *Rad *Rad;

    return Area;

}

//Find Area of the Circle by Takeing the Input from the user 
int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the Radius of circlr \n");
    scanf("%f",&fRadius);//10.5

    //fArea =  Radius( fRadius);
      fArea=  3.14 *10.5 *10.5;
    printf("Area of circle is :%f\n",fArea);


    return 0;
}