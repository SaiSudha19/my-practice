#include <iostream>
using namespace std;

int main()
{
    int n,r,rev=0,p;
    cout<<"enter a number:";
    cin>>n;
    p=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==p)
    {
    cout<<"it is a palindrome";
    }
    else
    {
    cout<<"it is not a palindrome";
    }
    
    return 0;
}
