#include<iostream>

using namespace std;



int main()
{
    int iNo1 = 13;
    int iNo2 = 24;
    int Ans = 0;

    Ans = iNo1&iNo2;
    cout<<"Bitwise And :"<<Ans<<"\n";

     Ans = iNo1|iNo2;
     cout<<"Bitwise OR :"<<Ans<<"\n";

     Ans = iNo1^iNo2;
     cout<<"Bitwise Xor :"<<Ans<<"\n";
   

    return 0;
}