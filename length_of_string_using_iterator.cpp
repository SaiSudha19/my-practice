#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s="hello";
    string::iterator it;
    int count=0;
    for(it=s.begin();it<s.end();it++)
     count++;
     cout<<"length of string: "<<count<<endl;
    return 0;
}
