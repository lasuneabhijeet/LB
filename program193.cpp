#include<iostream>
using namespace std;
class Array
{
    public:
    int *Arr = NULL;
    int iSize = 0;
    Array(int A)
    {
        iSize = A;
        Arr = new int[iSize];
    }
    ~Array()
    {
        delete []Arr;

    }
    void Accept()
    {
        int iCnt = 0;

    cout<<"Enter the values :\n";
    for(iCnt = 0;iCnt <iSize;iCnt++)
    {
        cin>>Arr[iCnt];
    }
    }
    void Display()
    {
        int iCnt = 0;
        
     cout<<"Value from the array are :\n";
     for(iCnt = 0;iCnt <iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
    }
    int CountEven()
    {
        int iCnt = 0;
        int icount =0;
        for(iCnt = 0;iCnt<iSize;iCnt++)
        {
            if(Arr[iCnt]%2 == 0)
            {
                icount++;
            }
        }
        return icount;
    }
   
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter number of element that you want to store :\n";
    cin>>iLength;

    

    Array aobj(iLength);
    aobj.Accept();
    aobj.Display();
    iRet = aobj.CountEven();
    cout<<"NUmber of even elements are : "<<iRet<<"\n";

   
   return 0;
}
