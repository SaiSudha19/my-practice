#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s="HELlO";
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65&&s[i]<=90)
        s[i]=s[i]+32;
    }
    cout<<s;
    return 0;

}

