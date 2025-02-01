#include<iostream>

using namespace std;

int main()
{
    int ivalue = 0;
    int iMask = 2;
    int iResult = 0;


    cout<<"Enter the  number :\n";
    cin>>ivalue;

    iResult= ivalue & iMask;

    if(iResult==0)
    {
        cout<<"Second bit is OFF\n";
    }
    else{
        cout<<"Second bit is ON\n";
    }




    return 0;
}
