//operating with variables
#include<iostream>

using namespace std;
int main()
{
    //declaring variables
    int a,b;
    int res = 0;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    //the program to calculate sum of 2 numbers
    res = a + b ;
    //print out result
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<res<<".";
    return 0;
}