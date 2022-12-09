#include <iostream>
using namespace std;

int main()
{
    int a,b;
    std::cout << "enter a,b" << std::endl;
    std::cin >> a>>b;
    if(b!=0)
    {
    cout<<"a/b="<<a/b;
    }
    else
    {
        cout<<"not possible";
    }
    return 0;
}
