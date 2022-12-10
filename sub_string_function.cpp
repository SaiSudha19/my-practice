#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[30]="programming";
    char s2[10];
    cout<<"enter s2:";
    cin>>s2;
    
    if(strstr(s1,s2)!=0)   
    cout<< strstr(s1,s2);
    else
    cout<<"not found";
    return 0;
}
