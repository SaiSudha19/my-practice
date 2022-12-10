#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<pair<int,int>>v={1,6,3,4,5};
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i];
    }
    cout<<endl;
    vector<int>::iterator it=v.begin();
    cout<<*it<<endl;
    cout<<(*it+1)<<endl;
    for(it=v.begin();it!=v.end();++it)
    {
        cout<<*(it);
    }
}
