#include <bits/stdc++.h>

using namespace std;
int printvector(vector<int>v)
   {
       cout<<"size:"<<v.size()<<endl;//O(1)
   for (int i=0;i<v.size();++i)
   {
     cout<<v[i];
   }
   
   cout<<endl;
   return 0;
   }

int main()
{
   vector<int>v;
   /*
   vector<data type>v(size)
   vector<data type>v(size,data)
   */
   int n;
   cout<<"enter the size:";
   cin>>n;
    cout<<"enter the elements:"<<endl;
   for (int i=0;i<n;++i)
   {
       int x;
      cin>>x;
      v.push_back(x);//time complexity O(1)
   }
   printvector(v);
   vector<int>v2=v;//O(n)
    printvector(v);
    return 0;
}
//v.pop_back() this removes last element
