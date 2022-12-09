#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter value of n:";
    cin>>n;
    int i=1;
    int sum=0;
    for( ;i<=n;i++)
    {
     sum+=i;//sum=sum+i
    }
    cout<<sum;

    return 0;
}
