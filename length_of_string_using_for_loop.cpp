#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s="hello";
    int count=0;
    for(int i=0;s[i]!='\0';i++)
     count++;
     cout<<"length of string: "<<count<<endl;
    return 0;
}
