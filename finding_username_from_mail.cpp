#include <iostream>

#include<string>
using namespace std;
int main()
{
    string s="sudha@gmail.com";
    string a=" ";
    a.resize(s.size());
    //int f=s.find('@');
    for(int i=0;s[i]!='@';++i)
    {
        a[i]=s[i];
    }
    cout<<a;
    return 0;
}
