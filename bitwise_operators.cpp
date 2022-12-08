#include <iostream>
using namespace std;

int main()
{
    int x=11,y=5,z,a,b,c,d,e;
    z=x&y;
    a=x|y;
    b=x^y;
    c=x<<2;
    d=x>>2;
    e=~x;
    
    std::cout << z << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;

    return 0;
}

