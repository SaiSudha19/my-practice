#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s="how are you";
    cout<<s.rfind("are")<<endl;
    cout<<s.rfind('o')<<endl;
    cout<<s.rfind('j')<<endl;
    return 0;
}
