#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "A def const: \n";
    }

    A(int x)
    {
        cout << "A param const: \n";
    }
};
class B : virtual public A
{
public:
    B(int x)
    {
        cout << "B param const: \n";
    }
};
class C : virtual public A
{
public:
    C(int x)
    {
        cout << "C param const: \n";
    }
};
class D : public B, public C    //contructort will be called according to the order of inheritance
{
public:
    D(int x) : C(x), B(x) // if the order of the constructor call is opposite of inheriting the classes,then also the
                        // order of inheritence will be followed for creating the grandchild
    {
        cout << "D param const: \n";
    }
};
int main()
{
    D ob(1);
}