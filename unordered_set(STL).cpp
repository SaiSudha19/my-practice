#include <bits/stdc++.h>

using namespace std;

void print(unordered_set<string>&s)
{
    for(auto value:s)
    {
        cout<<value<<endl;
    }
}

int main()
{
    unordered_set<string>s;
    s.insert("abc");//O(1)
    s.insert("bcd");
    s.insert("akj");
    auto it=s.find("abc");//O(1)
    if(it!=s.end())
    cout<<*it;
    else
    cout<<*it;
    s.erase("bcd");
    print(s);
}


