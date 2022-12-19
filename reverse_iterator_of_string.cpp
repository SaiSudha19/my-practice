#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s="hello";
    string::reverse_iterator it;
    for(it=s.rbegin();it<s.rend();++it)
    cout<<*it;
    return 0;
}

