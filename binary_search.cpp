#include <iostream>

using namespace std;

int main()
{
    int A[6]={1,2,3,4,5,6};
    int l=0,h=5,mid,key;
    
    cout<<"enter key";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<mid;
            return 0;
        }
        else if(key<A[mid])
        h=mid-1;
        else if(key>A[mid])
        l=mid+1;
    }
    cout<<"not found";
    return 0;
}

