#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter two numbers\n";
    cin>>a>>b;
    cout<<"select an operation\n"<<"1.add\n"<<"2.sub\n"<<"3.mul\n"<<"4.divd\n";
    cin>>c;
    switch(c)
    {
        case 1:cout<<a+b<<endl;
        break;
        case 2:cout<<a-b<<endl;
        break;
        case 3:cout<<a*b<<endl;
        break;
        case 4:cout<<a/b<<endl;
    }
    return 0;
}
