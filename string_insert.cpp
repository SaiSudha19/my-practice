#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s="hello";
    s.insert(2,"mm");
    s.insert(3,"apple",2);
    cout<<s;

    return 0;
}
