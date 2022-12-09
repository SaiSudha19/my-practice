#include <iostream>
using namespace std;

int main()
{
 int a,b,c,d;
 cout<<"enter a,b,c:\n";
 cin>>a>>b>>c;
 d=b*b-4*a*c;
 if(d==0)
 cout<<"equal roots\n"<<(-b/2*a);
 else if(d>0)
 cout<<"roots are real and distant";
 else if(d<0)
 cout<<"imaginary roots";
    return 0;
}
