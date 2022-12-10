#include <iostream>

using namespace std;

int main()
{
    int A[5]={1,2,3,4,5};
    int *p=A;
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<",";
        cout<<p[i]<<",";
        cout<<*(p+i)<<",";
        //cout<<*p<<",";
        //p++
        
    }

    return 0;
}
