#include <bits/stdc++.h>

using namespace std;

/*void printvect(vector<int>v)
{
    cout<<"size:"<<v.size()<<endl;
for(int i=0;i<v.size();++i)
{
    
    cout<<v[i];
}
cout<<endl;
}
*/
int main()
{
    int N;
    cout<<"size of vector:";
    cin>>N;
    vector<int>v[N];
    for(int i=0;i<N;++i)
    {
        int n;
        cout<<"size of array:";
        cin>>n;
        for(int j=0;j<n;++j)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        
        
    }
    for(int i=0;i<N;++i)
    {
       // printvect(v[i]);
       for(int j=0;j<v[i].size();++j)
           {
               cout<<v[i][j];
           }
           cout<<endl;
    }
    

    return 0;
}
