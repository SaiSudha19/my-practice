/*
Given N strings andd Q queries.
in each query you are given a stringsprint yes if string is present else print no.
N<=10^6
|S|<=10^int64_tQ<=10^6
*/
#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    unordered_set<string>s;
    int N;
    cout<<"enter N:";
    cin>>N;
    cout<<endl;
    cout<<"enter strings:"<<endl;
    for(int i=0;i<N;++i)
    {
        string a;
        cin>>a;
        s.insert(a);
    }
    int Q;
    cout<<"enter Q:";
    cin>>Q;
    cout<<endl;
    cout<<"enter strings:"<<endl;
    for(int j=0;j<Q;++j)
    {
        string a;
        cin>>a;
        if(s.find(a)==s.end())
        {
            cout<<"no"<<endl;
        }
        else
        cout<<"yes"<<endl;
    }
}
