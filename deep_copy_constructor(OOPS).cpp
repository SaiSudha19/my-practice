#include <iostream>

using namespace std;

class Test
{
 public:   
    int a;
    int *p;
    Test(int x)
    {
        a=x;
        p=new int[a];
    }
    Test(Test &t)
    {
        a=t.a;
        p=new int[a];
    }
};
int main()
{
    Test t(5);
    Test t2(5);
    cout<<"a="<<t.a<<endl;
    cout<<"a="<<t2.a<<endl;

    return 0;
}
