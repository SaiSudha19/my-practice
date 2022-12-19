#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s="hello";
    char str[10];
    s.copy(str,2);
    cout<<str;

    return 0;
}

