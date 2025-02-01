#include<iostream>

using namespace std;
bool CheckBit(int iNo)
{
    int iMask = 68;
    int iResult = 0;

    iResult= iNo & iMask;

    if(iResult==iMask)
    {
        return true;
    }
    else{
        return false;
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
        cout<<"3rd and  7th bit is ON\n";
    }
    else{
        cout<<"3rd and 7th bit is OFF\n";
    }




    return 0;
}
