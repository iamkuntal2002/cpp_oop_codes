#include <iostream>
using namespace std;
class X
{
    int x;
public:
    X(int a = 0)
    {
        x = a;
    }
    int get_x()
    {
        return x;
    }
};
class Y
{
    int y;
public:
    Y(int b = 0)
    {
        y = b;
    }
    Y(X ob)
    {
        y = ob.get_x();
    }
    void display()
    {
        cout << "y=" << y << endl;
    }
};
int main()
{
    X obx(50);
    Y oby;
    oby.display();
    oby = obx;
    oby.display();
}