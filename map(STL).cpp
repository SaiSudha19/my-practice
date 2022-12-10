#include <iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string>m;
    
    m[1]="abc";//O(log(n))
    m[5]="cde";// for  m["lkg"]="cde"  //s.size*log(n)
    m[3]="acd";
    m.insert({4,"afg"});
    m[6];
    for(auto value:m)
    {
        cout<<value.first<<" "<<value.second;
        cout<<endl;
    }
    m.clear();
    m.erase(3);
    cout<<"size:"<<m.size()<<endl;
    int a;
    cout<<"enter the value to be found:";
    cin>>a;
    auto it=m.find(a);//O(log(n))
    if(it==m.end())
    {
        cout<<"no value";
    }
    else
    {
        cout<<(*it).first<<" "<<(*it).second;
    }
    
    
}
