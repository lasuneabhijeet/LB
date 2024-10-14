#include<stdio.h>
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

///////////////////////////////////////////////////////
///
///  Funcation Name : Addition
///  Description :    It is used to perform addition of 2 number
///  Input :          Float,Float
///  Output :         Float
///  Author :         Abhijeet Lasune(1SP21AI001)
///  Date :           06/10/2024
///
///////////////////////////////////////////////////////
float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;                              //Local variable for result
    
    //Updator                               
    if(fValue1< 0.0f)
    {
        fValue1 = -fValue1;
    }   
    if(fValue2< 0.0f)
    {
        fValue2 = -fValue2;
    }                                                
    fAdd = fValue1 + fValue2;                      // Business Logic
    return fAdd;
}
//////////////////////////////////////////////////
////
//// This application is used to perform addition of 2 numbers
////
///////////////////////////////////////////////// 
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
/*
 Step 5: Test the program
PS D:\abhijeet\LB> gcc program10.c -o myexe
PS D:\abhijeet\LB> .\myexe.exe

Testcase 1
Enter the first number :
10.0
Enter the second number :
20.0
Addition is : 30.000000

Testcase 2
Enter the first number :
-10
Enter the second number :
20.0
Addition is : 30.000000

Testcase 3
Enter the first number :
10.0
Enter the second number :
-20.0
Addition is : 30.000000

Testcase 4
Enter the first number :
-10.0
Enter the second number :
-20.0
Addition is : 30.000000



*/