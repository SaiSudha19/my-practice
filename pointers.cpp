/*#include <iostream>

using namespace std;

int main()
{
   int A[5]={1,2,3,4,5};
   int *p=A ;
   int *q=&A[3];
   cout<<*(p+2)<<endl;
   cout<<p++<<endl;
   cout<<*q--<<endl;
   cout<<p-q;
   
    return 0;
}*/



/*
#include<iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    p++;
    // move pointer to next location to print 4
    cout<<*p;
    
    p=p+3; // pointer will be pointing on 10
    
    cout<<*(p-4) ;  // complete this statement to print 2 without moving pointer
return 0;
    
}
*/



#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    int *p=A;
    cout<<p<<endl;
    cout<<p+2<<endl;
    cout<<*(p-2)<<endl;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    
    
    return 0;
    
}
