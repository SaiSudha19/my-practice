#include <iostream>

using namespace std;
int max(int x,int y)
{
    return x>y?x:y;
}
int min(int x,int y)
{
    return x<y?x:y;
}
int main()
{
    int (*p)(int,int);
    p=max;
    cout<<(*p)(10,5)<<endl;
    p=min;
    cout<<(*p)(10,5);

    return 0;
}
