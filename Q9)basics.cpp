#include<iostream>
using namespace std;
int main()
{
    int P,Q;
    cout<<"Enter any two numbers"<<endl;
    cin>>P>>Q;
    cout<<"p="<<P<<" q="<<Q<<endl;
    if(P>Q)
    {
        cout<<"max number is "<<P;
    }
    else
    {
        cout<<"max number is "<<Q;
    }
    return 0;
}