
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << " A constructor: \n";
    }
    ~A()
    {
        cout << "A destructor: \n";
    }
};
class B : public A
{
public:
    B()
    {
        cout << " B constructor: \n";
    }
    ~B()
    {
        cout << "B destructor: \n";
    }
};
class C : public A
{
public:
    C()
    {
        cout << " C constructor: \n";
    }
    ~C()
    {
        cout << "C destructor: \n";
    }
};
class D : public B, public C
{
public:
    D()
    {
        cout << " D constructor: \n";
    }
    ~D()
    {
        cout << "D destructor: \n";
    }
};
int main()
{
    D ob; // The Grandparent class A is constructed as well as destructed twice
}
/*output:
A constructor: 
 B constructor:
 A constructor:
 C constructor:
 D constructor:
D destructor:
C destructor:
A destructor:
B destructor:
A destructor:*/