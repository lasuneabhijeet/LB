#include<iostream>

using namespace std;
int OffBit(int iNo,int iPos)
{
    int iMask =0X1;
    int iResult = 0;

    iMask = iMask<<(iPos-1);
    iMask = ~iMask;
    

    iResult = iNo & iMask;

    return iResult;

    

}


int main()
{
    int ivalue = 0,iRet =0,iLocation = 0;
    
    


    cout<<"Enter the number :\n";
    cin>>ivalue;

    cout<<"Enter the position:\n";
    cin>>iLocation;


    iRet = OffBit(ivalue,iLocation);

    cout<<"Number after bit oFf :"<<iRet<<"\n";

    return 0;
}
/*
int iNo = 25;       0   0   0   1   1   0   0   1         




*/
