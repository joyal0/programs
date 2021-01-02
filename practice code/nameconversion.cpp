#include<iostream>
#include<string>
#include<conio.h>

using namespace std;
int main()
{
    string s;
    char ch[20],t;
    int i = 0,c,countt=0;
    cin>>countt;
    cout<<"number entered";
    for(int i = 0;ch[i]<countt;++i)
    {
        cout<<"name";
        cin>>ch[i];

    }
    i =0;
    cin>>t;
    while(ch[i]<countt)
    {
        c = ch[i];
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='o'||ch[i]=='u'||ch[i]=='i')
        cout<<char(c-32);
        else
        cout<<char(c +1);
        ++i;
    }
    return 0;
}