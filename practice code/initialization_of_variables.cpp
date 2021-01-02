//initialization of variables
#include<iostream>

using namespace std;
int main()
{
    int a=5;            //initial value:  5
    int b(2);           //initial value:  2
    int c{3};           //initial value:  3
    int result;         //initial value:  unndetermined
    result = a + b + c;
    cout<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\n"<<result;
}