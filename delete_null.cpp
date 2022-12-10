#include <iostream>

using namespace std;

int main()
{
   int *p=new intd[5];//memory is alloccate in heap
   p[0]=12;
   p[1]=13;
   cout<<p[1]<<endl;
    
    delete [ ]p;//old elements will be deleted
    p=nullptr;//there will be no 0 elements if we use nulll
   
    return 0;
    
}
