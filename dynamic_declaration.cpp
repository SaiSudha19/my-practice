#include <iostream>
using namespace std;

int main()
{
    int a=10,b=5;
    if(true)//true or any integer 
    {
        int c=a+b;//it's dynamic declaration 
        cout<<c<<endl;
    }
    if(false)//false or 0
    {
        int d=a+a;
        cout<<d<<endl;
    }
}
