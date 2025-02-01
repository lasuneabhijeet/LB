#include<iostream>

using namespace std;
bool CheckBit(int iNo,int iPos)
{
    int iMask = 0x1;
    int iResult = 0;
    iMask = iMask << (iPos-1);

    iResult=iNo&iMask;
    if(iResult==iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}




int main()
{
    int ivalue = 0,iLocation = 0;
    bool bRet = false;
    
    

    cout<<"Enter the number :\n";
    cin>>ivalue;

    cout<<"Enter the position :\n";
    cin>>iLocation;

    bRet = CheckBit(ivalue,iLocation);

    if(bRet == true)
    {
        cout<<"Bit is ON\n";
    }
    else
    {
        cout<<"Bit is OFF\n";
    }
    



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