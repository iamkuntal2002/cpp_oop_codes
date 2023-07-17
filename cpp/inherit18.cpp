#include <iostream>
using namespace std;
class A
{
public:
    A(int x = 0)
    {
        cout << "A param const: \n";
    }
};
class B : public A
{
public:
    B(int x)
    {
        cout << "B param const: \n";
    }
};
class C : public A
{
public:
    C(int x)
    {
        cout << "C param const: \n";
    }
};
class D : public B, public C
{
public:
    D(int x) : B(x), C(x)
    {
        cout << "D param const: \n";
    }
};
int main()
{
    D ob(1);
}