#include <iostream>
#include<string>
using namespace std;
int main()

{
    string s="how are you";
    cout<<s.find_first_of("are")<<endl;
    cout<<s.find_last_of("are")<<endl;
    cout<<s.find_first_of('o')<<endl;
    cout<<s.find_last_of('o')<<endl;
    cout<<s.find_first_of('o',4)<<endl;
    cout<<s.find_last_of("are")<<endl;
    return 0;

}
