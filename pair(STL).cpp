#include <iostream>

using namespace std;

int main()
{
   pair<int,string>p;//initializing pair
   p=make_pair(2,"abc");//giving values to pair
   //p={2,"abc"};//another way of giving values
    pair<int,string>&p1=p;
    p1.first=1;
   cout<<p.first<<" "<<endl;//prints 1st value
   cout<<p.second<<endl;//prints 2nd value
   int a[]={1,2,3};
   int b[]={2,3,4};
   pair<int,int>p_array[3];
   p_array[0]={1,2};
   p_array[1]={2,3};
   p_array[2]={3,4};
   swap(p_array[0],p_array[2]);
   for(int i=0;i<3;++i)
   {
       cout<<p_array[i].first<<""<<p_array[i].second<<endl;
   }
   return 0;
}
