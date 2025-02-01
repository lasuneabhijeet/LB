#include<iostream>
using namespace std;
template<class T>





T AdditionI(T Arr[],int iSize)
{
    T iSum;
    int i = 0;
    for(i = 0;i < iSize;i++)
    {
        iSum = iSum+Arr[i];
    }
    return iSum;
}
int main()
{
    int Arr[] = {10,20,30,40};
    int iRet = 0
    iRet = AdditionI(Arr,4);
    cout<<"Addition is : "<<iRet<<"\n";
    double Brr[] = {10.1,20.2,30.3,40.5};
   double dRet = 0.0;

    dRet = AdditionI(Brr,4);
    cout<<"Addition of double is : "<<dRet<<"\n";

    return 0;
}