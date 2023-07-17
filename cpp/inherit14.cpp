#include <iostream>
using namespace std;
class A1
{
protected:
    int a;
public:
    A1()
    {
        cout << " A1 constructor: \n";
    }
    void show()
    {
        cout << " within A1 show "
             << "a=" << a << endl;
    }
    ~A1()
    {
        cout << " A1 destructor: \n";
    }
};
class A2
{
protected:
    int a;
public:
    A2()
    {
        cout << " A2 constructor: \n";
    }
    void show()
    {
        cout << " within A2 show "
             << "a=" << a << endl;
    }
    ~A2()
    {
        cout << " A2 destructor: \n";
    }
};
class C : public A1, public A2
{
public:
    C()
    {
        cout << " C constructor: \n";
    }
    void get()
    {
        A1::a = 10;
        A2::a = 20;
    }
    ~C()
    {
        cout << " C destructor: \n";
    }
};
int main()
{
    C ob;
    ob.get();
    ob.A1::show();
    ob.A2::show();
}
/*output:
A1 constructor: 
 A2 constructor:
 C constructor:
 within A1 show a=10
 within A2 show a=20
 C destructor:
 A2 destructor:
 A1 destructor:*/