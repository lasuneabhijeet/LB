#include<iostream>

using namespace std;




int main()
{
    int ivalue = 0;
    int iPos = 0;
    int iMask = 0x1;

    cout<<"Enter the number :\n";
    cin>>ivalue;

    cout<<"Enter the position :\n";
    cin>>iPos;

    iMask = iMask << (iPos-1);
    



    return 0;
}
/*
iPos :9;
iMask = iMask<<iPos-1
iMask     0000   0000   0000   0000  0000  0000  0000  0001    (0X1)
                                               <----------

                                iMask = iMask<<(iPos-1);
                                iMask = iMask << 8;

iMask     0000   0000   0000   0000  0000  0001  0000  0000



*/