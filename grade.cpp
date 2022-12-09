#include <iostream>

using namespace std;

int main()
{
    int m1,m2,m3;
    float avg;
    cout<<"enter your marks of 3 subjects\n";
    cin>>m1>>m2>>m3;
    avg=(m1+m2+m3)/3.0;
    cout<<"your average is :"<<avg<<endl;
    if(avg>=60)
    cout<<"A GRADE...don't forgot to give party";
    else if(avg>=35&&avg<60)
    cout<<"B GRADE...have a great day";
    else if(avg<35)
    cout<<"C GRADE..go nd attend ur fried party";
    return 0;
}
