#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20]="programming";
    char a;
    cout<<"enter a char:";
    cin>>a;
    cout<<strchr(s1,a)<<endl;//from left side
    cout<<strrchr(s1,a);//from right side
    return 0;
}
