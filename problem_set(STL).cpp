/*
given N strings,print unique strings in lexiographical order
N<=10^5
|S|<=100000
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string>s;
    int n;
    cout<<"enter no. of strings:";
    cin>>n;
    cout<<endl;
    cout<<"enter the strings:"<<endl;
    for(int i=0;i<n;++i)
    {
        string a;
        cin>>a;
        s.insert(a);
    }
    cout<<"lexiographical order:"<<endl;
    for(auto value:s)
    {
        cout<<value<<endl;
    }
}
