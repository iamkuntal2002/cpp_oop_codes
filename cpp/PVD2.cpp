#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "A const: \n";
    }
     void fun()
    {
        cout << "A fun() \n";
    }
};
class B
{
public:
    B()
    {
        cout << "B const: \n";
    }
    void fun()
    {
        cout << "B fun() \n";
    }
};
class C : public A, public B
{
};
int main()
{
    C ob;
    // ob.fun(); //Error, due to ambiguious situation
    ob.A::fun();
}