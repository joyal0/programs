#include<iostream>
using namespace std;
#include<vector>

int main()
{
    int size,a,temp;
    vector<int> g1;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter values: ";
    for(int i=0;i<size;++i)
    {
        cin>>a;
        g1.push_back(a);
    }
    for(int j=0;j<size;++j)
    for(auto i = g1.begin() ; i != g1.end() ; ++i )
    {
        if(*i > *(i+1))
        {
            temp = *i;
            *i = *(i+1);
            *(i+1) = temp;
        }
    }
    cout<<"The sorted array is: \n";
    for(auto i = g1.begin() ; i != g1.end() ; ++i )
    {
        cout<<*i<<" ";
    }
     return 0;
}