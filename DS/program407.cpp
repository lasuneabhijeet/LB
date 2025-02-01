#include<iostream>
using namespace std;

template<class T>


class Array
{
    public:
   T *Arr;
    int isize;
 Array(int length);
 ~Array();
 void Accept();
 void Display();
 T Addition();
   

};
template<class T>
 Array<T> :: Array(int length)
 {
   
    isize = length;
    Arr = new T [isize];
    

 }
 template<class T>
 Array<T>::~Array()
 {
    delete []Arr;
 }
 template<class T>
 void Array<T>::Accept()
 {
    int i = 0;
    cout<<"please enter the value :\n";
    for(i=0;i<isize;i++)
    {
        cin>>Arr[i];
    }
 }
 template<class T>
 void Array<T>::Display()
 {
    int i = 0;
    cout<<"element of the array are :\n";
    for(i=0;i<isize;i++)
    {
        cout<<Arr[i]<<"\n";
    }

 }
 template<class T>
 T Array<T>:: Addition()
 {
    int i =0;
    T iSum = 0;
    for(i=0;i<isize;i++)
    {
        iSum = iSum+Arr[i];
        
    }
    return iSum;
 }
int main()
{
    float  fRet =0.0f;
    Array <float>aobj(5);
    aobj.Accept();
    aobj.Display();

    fRet = aobj.Addition();

    cout<<"Addition of array element are :"<<fRet<<"\n";


    return 0;
}