#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s="hello";
    cout<<"length of the string: "<<s.length()<<endl;//s.size()
    cout<<"capacity of string: "<<s.capacity()<<endl;
    s.resize(30);
    cout<<"resized capacity:"<<s.capacity()<<endl;
    cout<<"max size of string by compiler:"<<s.max_size()<<endl;
    s.clear();
    cout<<s;
    if(s.empty())
    cout<<"string is empty";
    return 0;
}
