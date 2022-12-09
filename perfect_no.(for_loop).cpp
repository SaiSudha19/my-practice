#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter a number:";
    cin>>n;
    int sum=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    cout<<"sum of factors of number="<<sum<<endl;
    if(sum==2*n)
    cout<<"it's a perfect number";
    //sum of factors of the no.=double of the number
    else
    cout<<"it's not a perfect number"
    return 0;
}
