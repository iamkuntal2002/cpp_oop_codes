#include <iostream>
using namespace std;
class A
{
public:
    A(int x = 0)
    {
        cout << "A param const:"
             << " x=" << x << endl;
    }
};
class B
{
public:
    B(int x = 1)
    {
        cout << "B param const: \n";
    }
};
class C : public A, public B // Multiple inheritence
{
public:
    C()
    {
        cout << "C def const: \n";
    }
};
int main()
{
    C ob;
}