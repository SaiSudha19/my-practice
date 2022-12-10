#include<iostream>
using namespace std;

int main()
{
    int i, A[]={2,4,6,8,10};
    int max;
    max=A[0];
    for(i=1;i<5;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
        
    }
    cout<<max;
return 0;
    
}
