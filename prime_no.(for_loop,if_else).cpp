#include <iostream>

using namespace std;

int main()

{

    int i,n;

    cout<<"enter a number:";

    cin>>n;

    int sum=0;//or count=0

    for(i=1;i<=n;i++)

    {

        if(n%i==0)

        {

            sum+=i;//or count++

        }

    }
    if(sum==n+1)//or count==2
    cout<<"it's a prime";
    else if(sum==1)
    cout<<"it's neither a prime nor composite no.";
    else
    cout<<"it's not a prime";

    return 0;
}
