/*
START
    Accept the total marks
    Accept the  obtained marks
    Calculate the percentage as(obtained /total)*100
    Display the calculate percentage

   Stop
*/
#include<stdio.h>
float CalculatePercentage(int iMarks,int iTotal)
{
     float fPercentage = 0.0;
     fPercentage = (iMarks/iTotal)*100;
     printf("%f",fPercentage);

     return fPercentage;

}

int main()
{
    int ivalue1 =0;
    int iValue2 = 0;
    printf("Enter the Total MArks in Exam:\n");
    scanf("%d",&ivalue1);
    printf("Enter obtained Marks :");
    scanf("%d",&iValue2);

   float  fResult = 0;

    fResult = CalculatePercentage(iValue2,ivalue1);

    printf("Perntage of Student in Exam :%f\n",fResult);



    return 0;
}