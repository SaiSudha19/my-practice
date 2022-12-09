#include <iostream>
using namespace std;

int main()
{
    int y;
    cout<<"YEAR:\n";
    cin>>y;
   if( y % 4==0)
   {
       if( y % 100==0)
       {
       if( y % 400==0)
       cout<<"leap year";
       
       else
           cout<<"not a leap year";
       }
       else
       cout<<"leap year";
       
   }
   else
   {
       cout<<"not a leap year";
   }
    
}
