#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1="hello";
    string s2="bye";
    s1.swap(s2);
    cout<<"s1: "<<s1<<endl;
    cout<<"s2: "<<s2;  
    return 0;
}
