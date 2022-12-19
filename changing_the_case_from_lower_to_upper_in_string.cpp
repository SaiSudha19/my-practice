#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s="Hello4";
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=97&&s[i]<=122)
        s[i]=s[i]-32;
    }
    cout<<s;
    return 0;

}
