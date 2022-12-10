#include <bits/stdc++.h>


using namespace std;

int main()
{
    unordered_map<int,string>m;
    
    m[1]="abc";//O(1)
    m[5]="cde";
    m[3]="acd";
    m.insert({4,"afg"});
    m[6];
    for(auto value:m)
    {
        cout<<value.first<<" "<<value.second;
        cout<<endl;
    }
    cout<<"size:"<<m.size()<<endl;
    
}

