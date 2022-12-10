/*
given N string and Q queries.
In each query you are given a string
print frequency of that string
N<=10^6
|s|<=100
Q<=10^6
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string,int>m;
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
   int q;
   cin>>q;
   for(int i=0;i<q;++i)
   {
       string s;
       cin>>s;
       cout<<m[s]<<endl;
   }    
}

