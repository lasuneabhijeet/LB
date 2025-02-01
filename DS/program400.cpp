#include<iostream>
using namespace std;





double AdditionI(double Arr[],int iSize)
{
    double iSum = 0.0;
    int i = 0;
    for(i = 0;i < iSize;i++)
    {
        iSum = iSum+Arr[i];
    }
    return iSum;
}
int main()
{
    double Brr[] = {10.1,20.2,30.3,40.5};
   double dRet = 0.0;

    dRet = AdditionI(Brr,4);
    cout<<"Addition of double is : "<<dRet<<"\n";

    return 0;
}