#include <iostream>

using namespace std;

int main()
{
   float  A[5]={4.3f,3,2.99f,55,4};
   //int i;
   for(auto x:A)//auto means any data type
   cout<<x<<",";
   /*for(i=0 ; i<5; i++)
   {
       cout<<A[i]<<",";
   }
*/
    return 0;
}
