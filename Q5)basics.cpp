#include<iostream>
using namespace std;
int main()
{
    float l,b,h,res;
    cout<<"Enter length of cuboid"<<endl;
    cin>>l;
    cout<<"Enter breadth of cuboid"<<endl;
    cin>>b;
    cout<<"Enter heigth of cuboid"<<endl;
    cin>>h;
    res=l*b*h;
    cout<<"volume of cuboid is "<<res;
    
    return 0;
}