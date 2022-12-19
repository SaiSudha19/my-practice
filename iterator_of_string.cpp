#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s="hello";
    string::iterator it;
    for(it=s.begin();it<s.end();++it)
    cout<<*it;
    return 0;
}
