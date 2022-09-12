#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    cout<<"before swaping the values"<<endl;
    cout<<"x="<<x<<" y="<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"after swaping the values"<<endl;
    cout<<"x="<<x<<" y="<<y<<endl;

    return 0;
}