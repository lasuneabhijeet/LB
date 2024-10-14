/*
Step1 : understand the problem Statement
Step2 : write the algorithm
Step3 : Decide the programming language
Step4 : Write the program
Step5 : Test the program
*/
/*
Problem Statement :
Write a program which is used to perform ADDITION of Two numbers.
*/
/*
Step1 : understand the problem statement
User is going th enter the data in decimal format.
If entered data is negative we have to convert it to positive value.
*/
/*
Step2 : Write the algorithm

    START
      Accept first input
      Accept second input
      If any of the input is negative then convert it into positive
      Perform the addition of that accepted values
      Display the addition
    STOP
*/
/*
      Step3 : Decide the the programming language
      According to the problem statement we select C programmming
*/
/*
Step4 : Write the program
*/
#include<stdio.h>
int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;

    printf("Enter the first number :\n");
    scanf("%f",&fNo1);

    printf("Enter the second number :\n");
    scanf("%f",&fNo2);

    fAns = fNo1 + fNo2;

    printf("Addition is : %f\n",fAns);

    return 0;
}