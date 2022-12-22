#include <iostream>

using namespace std;

int add(int a,int b=0,int c=0)
{
    return a+b+c;
}
int main()
{
    cout<<add(1,3,9);

    return 0;
}
