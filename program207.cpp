#include<iostream>

using namespace std;
bool CheckBit(int iNo)
{
    int iMask = 0x2;
    int iResult = 0;

    iResult= iNo & iMask;

    if(iResult==0)
    {
        return false;
    }
    else{
        return true;
    }
    
}



int main()
{
    int ivalue = 0;
    bool bRet = false;
   


    cout<<"Enter the  number :\n";
    cin>>ivalue;

    bRet = CheckBit(ivalue);

    if(bRet==true)
    {
        cout<<"Second bit is ON\n";
    }
    else{
        cout<<"Second bit is OFF\n";
    }




    return 0;
}
