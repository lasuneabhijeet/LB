#include<iostream>
using namespace std;




int main()
{
    int iLength = 0;
    int *Arr = NULL;
    int iCnt =0;

    cout<<"Enter number of element that you want to store :\n";
    cin>>iLength;

    Arr = new int[iLength];//resource Allocation (Constructor)
    //Arr = (int*)malloc(sizeof(int)*iLength);

    cout<<"Enter the values :\n";
    for(iCnt = 0;iCnt <iLength;iCnt++)//logic (funcation)
    {
        cin>>Arr[iCnt];
    }
    cout<<"Value from the array are :\n";
     for(iCnt = 0;iCnt <iLength;iCnt++)//logic (funcation)
    {
        cout<<Arr[iCnt]<<"\n";
    }
    delete []Arr;    //REsource deallocation(Destructor)

   
   return 0;
}
