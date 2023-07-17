#include <iostream>
using namespace std;
class B
{
    int a;
protected:
    int b;
public:
    B(int a = 0) // it functions both as a def and param constructor
    {
        cout<<"B class constructor"<<endl;
        this->a = a;
    }
    void show()
    {
        cout << "a=" << a << "b=" << b << endl;
    }
    ~B()
    {
        cout << "class B destructing"<<endl;
    }
};
class C1 : public B
{
public:
    C1() : B(5)
    {
        cout<<"C1 class constructor"<<endl;
        b = 10;
    }
    ~C1()
    {
        cout << "class C2 destructing"<<endl;
    }
};
class C2 : public B
{
public:
    C2() // as the Base class constructor functions both as a def and param constructor , we may omit the explicit constructor call to it
    {
        cout<<"C2 class constructor"<<endl;
        b = 20;
    }
    ~C2()
    {
        cout <<"Class C2 destructing"<<endl;
    }
};
int main()
{
    C1 ob;
    ob.show();
    C2 ob2;
    ob2.show();
}