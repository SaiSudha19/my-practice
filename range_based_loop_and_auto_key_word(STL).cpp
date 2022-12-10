#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v={1,2,3,4};
    for(int i=0;i<v.size();++i)//general
    {
        cout<<v[i];
    }
    cout<<endl;
    
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();++it)//using iterator
    {
        cout<<*it;
    }
    cout<<endl;
    
    for(int value:v)//range based loop
    {
        cout<<value;
    }
    cout<<endl;
    
     for(auto value:v)//auto key word
    {
        cout<<value;
    }
    cout<<endl;
}
