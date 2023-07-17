#include <iostream>
using namespace std;
class Y
{
    int y;
public:
    Y()
    {
        y = 10;
    }
    void f()
    {
        cout << "y=" << y << endl;
    }
};
class X
{
    Y *ptr;
public:
    X(Y y1)
    {
        ptr = &y1;
    }
    Y *operator->()
    {
        return ptr;
    }
};
int main()
{
    Y y1;
    X x(y1);
    x->f(); //(x.operator->())->f();
}