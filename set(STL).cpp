#include <bits/stdc++.h>

using namespace std;

void print(set<string>&s)
{
    for(auto value:s)
    {
        cout<<value<<endl;
    }
}

int main()
{
    set<string>s;
    s.insert("abc");//log(n)
    s.insert("bcd");
    s.insert("akj");
    auto it=s.find("abc");//log(n)
    if(it!=s.end())
    cout<<*it;
    else
    cout<<*it;
    s.erase("bcd");
    print(s);
}

