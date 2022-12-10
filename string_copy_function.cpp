#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20];
    char s2[10]="hello";
    strcpy(s1,s2);
    //strncpy(s1,s2,3)
    cout<<s1;

    return 0;
}
