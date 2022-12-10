/*
given N strings,print unique srings in lexiographical order with their frequency
N<=10^5
|s|<=100
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int>m;
    int n;
    cout<<"enter no. of strings:";
    cin>>n;
    cout<<endl;
   for(int i=0;i<n;++i)
   {
       string s;
       cout<<"enter the string:";
       cin>>s;
       m[s]=m[s]+1;//m[s]++
   }
   for(auto value:m)
   {
       cout<<value.first<<" "<<value.second<<endl;
   }
}
