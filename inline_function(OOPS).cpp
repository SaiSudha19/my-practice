#include <iostream>

using namespace std;

class test 
{
    public:
    void fun1()
    {
        cout<<"inline"<<endl;
    }
    inline void fun2();
    void fun3();
};
void test::fun2()
{
    cout<<"inline"<<endl;
}
void test::fun3()
{
    cout<<"non-inline"<<endl;
}
int main()
{
    test t;
    t.fun1();
    t.fun2();
    t.fun3();

    return 0;
}
