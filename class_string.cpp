#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"enter the string:";
    //cin>>str;
    getline(cin,str);
    cout<<str;
    return 0;
}
