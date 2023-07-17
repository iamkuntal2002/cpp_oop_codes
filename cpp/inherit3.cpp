#include <iostream>
using namespace std;
class A
{
    int x; // can neither be inherited or be accessed outside the class definition
protected:
    int y; // they can be inherited, but not accessible outside the class definition
public:
    void get()
    {
        x = 10;
    }
    void print()
    {
        cout << "x=" << x << "y=" << y;
    }
};
class B : public A
{
public:
    void fun()
    {
        // A::x;    //private in base class, cannot be accessed or inherited
        cout<<"the value of y of class A is "<<A::y;
        A::get();
        A::print();
    }
};
int main()
{
    B ob;
    ob.fun();
}