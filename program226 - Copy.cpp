#include<iostream>

using namespace std;
int OnBit(int iNo,int iPos)
{
    int iMask =0X1;
    int iResult = 0;

    iMask = iMask<<(iPos-1);
    
    

    iResult = iNo | iMask;

    return iResult;

    

}


int main()
{
    int ivalue = 0,iRet =0,iLocation = 0;
    
    


    cout<<"Enter the number :\n";
    cin>>ivalue;

    cout<<"Enter the position:\n";
    cin>>iLocation;


    iRet = OnBit(ivalue,iLocation);

    cout<<"Number after bit On :"<<iRet<<"\n";

    return 0;
}
/*
int iNo = 25;       0   0   0   1   1   0   0   1         




*/
