#include<iostream>

using namespace std;


int main()
{
    int ivalue = 0;
    int iMask =0x10;
    int iResult = 0;


    cout<<"Enter the number :\n";
    cin>>ivalue;

    iResult = ivalue ^ iMask;

    cout<<"Number after bit toggle :"<<iResult<<"\n";

    return 0;
}
/*
int iNo = 25;       0   0   0   1   1   0   0   1         




*/
