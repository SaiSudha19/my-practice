#include <bits/stdc++.h>

using namespace std;

int main()
{
   multiset<string>s;
   s.insert("abc");//O(log(n))
   s.insert("awc");
   s.insert("ibc");
   s.insert("abc");
   s.insert("awc");
   auto it=s.find("abc");//O(log(n))
   if(it!=s.end())
   {
       s.erase(it);//erases only first abc
   }
   s.erase("awc");//erases alla awc
   for(auto value:s)
   {
       cout<<value<<endl;
   }
}
