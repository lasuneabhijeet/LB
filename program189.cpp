#include<iostream>
using namespace std;

class  NUmber
{
    public:
    int iNo=0;

    NUmber(int A)
    {
        iNo = A;
    }
    void DisplayFactors()     //O(N/2)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            cout<<iCnt<<"\n";
        }
    }
}
};

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    cin>>iValue;

    NUmber nobj(iValue);

    nobj.DisplayFactors();
    return 0;

}
