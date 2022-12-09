#include <iostream>

using namespace std;

int main()
{
    int n,r;
    cout<<"enter a no.:";
    cin>>n;
    int m=n;
    int sum=0;
    
      {
        while(n>0)
          {
        r=n%10;
        n=n/10;
        sum=r*r*r+sum;
          }
        
          if(sum==m)
          cout<<"it's amstrong number";//sum of cubes of digits of the no.=number
          else
          cout<<"it's not amstrong number";
      }
      return 0;
}
