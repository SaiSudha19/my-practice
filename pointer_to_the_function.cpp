#include <iostream>

using namespace std;
void display()
{
    cout<<"hello";
}
int main()
{
    void (*p)();//declarization
    p=display;//initialization
    (*p)();//function call
    
    return 0;
}
