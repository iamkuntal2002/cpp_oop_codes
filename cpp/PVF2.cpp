#include <iostream>
using namespace std;
class W
{
public:
    virtual void fun()
    {
        cout << "W fun() \n";
    }
};
class X : public W
{
public:
    void fun()
    {
        cout << "X fun() \n";
    }
};
class Y : public W
{
public:
    void fun()
    {
        cout << "Y fun() \n";
    }
};
class Z
{
public:
    void callFun(W *ptr)
    {
        ptr->fun();
    }
};
int main()
{
    Z *ptr_z = new Z;
    W *ptr_w;
    X obX;
    Y obY;
    ptr_w = &obX;
    ptr_w->fun();
    ptr_w = &obY;
    ptr_w->fun();
    ptr_z->callFun(ptr_w);
}