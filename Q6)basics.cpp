#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter any three numbers"<<endl;
    cin>>x>>y>>z;
    int sum,avg;
    sum=x+y+z;
    avg=sum/3;
    cout<<"the average of three numbers is "<<avg;
    return 0;
}