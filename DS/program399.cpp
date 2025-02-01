#include<iostream>
using namespace std;





float AdditionI(float Arr[],int iSize)
{
    float iSum = 0.0f;
    int i = 0;
    for(i = 0;i < iSize;i++)
    {
        iSum = iSum+Arr[i];
    }
    return iSum;
}
int main()
{
    float Brr[] = {10.1f,20.2f,30.3f,40.4f};
    float fRet = 0;

    fRet = AdditionI(Brr,4);
    cout<<"Addition of float is : "<<fRet<<"\n";

    return 0;
}