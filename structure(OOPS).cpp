#include <iostream>

using namespace std;
struct demo
{
    int x;
    int y;
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    demo d;
    d.x=10;
    d.y=20;
    d.display();

    return 0;
}
