//10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,sum=0;
    cout<<"Enter 10 elements into an array\n";
    for(i=0;i<10;i++)
    {
       cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum of given array is "<<sum;

    return 0;
}