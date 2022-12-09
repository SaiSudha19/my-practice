#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter values of a,b,c:";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"the max is "<<a;
    }
    else if(b>a&&b>c)
        cout<<"the max is "<<b;
    else
        cout<<"the max is "<<c;
    
 
    return 0;
}
