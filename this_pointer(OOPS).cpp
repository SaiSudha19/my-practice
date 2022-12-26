#include <iostream>

using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle(int length,int breadth)
    {
        this->length=length;
        this->breadth=breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r(10,5);
    cout<<r.area();
    return 0;
}
