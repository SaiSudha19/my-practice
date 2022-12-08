#include <iostream>

using namespace std;
enum day {mon,tue,wed,thu=4,fri,sat=11,sun};
//  #define mon 0
// const int mon=0;
int main()
{
    day a,b,c,d;
    a=mon;
    b=tue;
    c=wed;
    d=thu;
    
    cout<<a<<b<<c<<d<<fri<<sat<<sun;

    return 0;
}

