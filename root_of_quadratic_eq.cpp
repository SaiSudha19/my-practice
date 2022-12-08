#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c,r;
    cout<< "enter the values of a,b,c of equation ax^2+bx+c \n";
    cin>>a>>b>>c;
    r=(-b+sqrt(b*b-4*a*c))/(2*a);
    cout<<"one of the root is: "<<r;

    return 0;
}
