#include<iostream>
using namespace std;
template<class t>
t Max(t a, t b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5f,17.3f);
}

