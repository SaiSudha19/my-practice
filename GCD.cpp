#include <iostream>

using namespace std;

int main()
{
    int i=1,n,m,l;
    cout<<"enter two numbers:\n";
    cin>>n>>m;
    while(i<=n&&i<=m)
    {
        if(n%i==0&&m%i==0)
        { 
            l=i;
        }
        i++;
    }
cout<<"GCD="<<l<<endl;
    return 0;
}
