#include<iostream>

using namespace std;
int ToggleBit(int iNo)
{
    int iMask =0x10;
    int iResult = 0;
    iResult = iNo ^ iMask;
    return iResult;

}


int main()
{
    int ivalue = 0;
    int iRet =0;
    


    cout<<"Enter the number :\n";
    cin>>ivalue;

    iRet = ToggleBit(ivalue);

    cout<<"Number after bit toggle :"<<iRet<<"\n";

    return 0;
}
/*
int iNo = 25;       0   0   0   1   1   0   0   1         




*/
