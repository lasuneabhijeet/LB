#include<iostream>
using namespace std;


class Array
{
    public:
    float *Arr;
    int isize;
 Array(int length);
 ~Array();
 void Accept();
 void Display();
 float Addition();
   

};
 Array :: Array(int length)
 {
   
    isize = length;
    Arr = new float [isize];
    

 }
 Array::~Array()
 {
    delete []Arr;
 }
 void Array::Accept()
 {
    int i = 0;
    cout<<"please enter the value :\n";
    for(i=0;i<isize;i++)
    {
        cin>>Arr[i];
    }
 }
 void Array::Display()
 {
    int i = 0;
    cout<<"element of the array are :\n";
    for(i=0;i<isize;i++)
    {
        cout<<Arr[i]<<"\n";
    }

 }
 float Array:: Addition()
 {
    int i =0;
    float iSum =0.0f;
    for(i=0;i<isize;i++)
    {
        iSum = iSum+Arr[i];
        
    }
    return iSum;
 }
int main()
{
    float fRet =0.0f;
    Array aobj(5);
    aobj.Accept();
    aobj.Display();

    fRet = aobj.Addition();

    cout<<"Addition of array element are :"<<fRet<<"\n";


    return 0;
}