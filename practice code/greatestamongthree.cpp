#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Enter the 3 integers to find the largest: ";
    cin>>n1>>n2>>n3;
    if((n1>=n3)&&(n1>=n2))
    cout<<n1<<" is the largest.";
    else if((n2>=n1)&&(n2>=n3))
    cout<<n2<<" is the largest.";
    else
    cout<<n3<<" is the largest.";
    
}