#include <iostream>

int main()
{
    int b,h;
    float a;
    std::cout << "enter base and height\n" << std::endl;
    std::cin >> b>>h;
    a=(float)(b*h)/2;
    std::cout << "area :"<<a << std::endl;

    return 0;
}
