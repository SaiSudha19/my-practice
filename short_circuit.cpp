#include <iostream>
using namespace std;

int main()
{
    int a=10,b=5,i=4;
    
    if(a<b&&++i<=b)
    {
    cout<<i<<endl;
    }
    
    if(a>b&&++b>i)
    cout<<b<<endl;

    return 0;
}
