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
    B(int x) : A(x) // always A's def const will be called, even if A's param const is invoked explicitly
    {
        cout << "B param const: \n";
    }
};
class C : virtual public A
{
public:
    C(int x) : A(x) // always A's def const will be called, even if A's param const is invoked explicitly
    {
        cout << "C param const: \n";
    }
};
class D : public B, public C
{
public:
    D(int x) : B(x), C(x), A(x) // if we virtually inherit the class A, we have to call A's param const in this way
    {
        cout << "D param const: \n";
    }
};
int main()
{
    D ob(1);
}