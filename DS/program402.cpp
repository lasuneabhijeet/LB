#include<iostream>
using namespace std;


class Array
{
    public:
    int *Arr;
    int isize;
 Array(int length)
 {
   
    isize = length;
    Arr = new int [isize];
    

 }
 ~Array()
 {
    delete []Arr;
 }
 void Accept()
 {
    int i = 0;
    cout<<"please enter the value :\n";
    for(i=0;i<isize;i++)
    {
        cin>>Arr[i];
    }
 }
 void Display()
 {
    int i = 0;
    cout<<"element of the array are :\n";
    for(i=0;i<isize;i++)
    {
        cout<<Arr[i]<<"\n";
    }

 }
 int Addition()
 {
    int i =0;
    int iSum =0;
    for(i=0;i<isize;i++)
    {
        iSum = iSum+Arr[i];
        
    }
    return iSum;
 }
   

};
int main()
{
    int iRet =0;
    Array aobj(5);
    aobj.Accept();
    aobj.Display();

    iRet = aobj.Addition();

    cout<<"Addition of array element are :"<<iRet<<"\n";


    return 0;
}