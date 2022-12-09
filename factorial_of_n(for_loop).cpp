#include <iostream>
using namespace std;
int main()
{
    int fact=1,n,i;
    cout<<"enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
{
    fact=fact*i;
}
cout<<fact;
    return 0;
}
