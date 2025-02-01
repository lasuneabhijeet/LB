#include<iostream>

using namespace std;
bool CheckBit(int iNo)
{
    int iMask = 0xe000;
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
    int ivalue = 0,number = 0;
    bool bRet = false;
   


    cout<<"Enter the  number :\n";
    cin>>ivalue;

    cout<<"Enter bit place";
    cin>>number;

    bRet = CheckBit(ivalue);

    if(bRet==true)
    {
        cout<<"  14,15,16 th bit is ON\n";
    }
    else{
        cout<<" 14,15,16th bit is OFF\n";
    }




    return 0;
}
//