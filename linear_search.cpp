#include <iostream>

using namespace std;

int main()
{
    int key,i,A[6],n=6;
    cout<<"enter elements of array\n";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"enter key:";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<"found at "<<i;
            return 0;
        }
        
    }
        cout<<"not found";
    return 0;
}
