#include <iostream>
using namespace std;
class A1
{
protected:
    int a;
public:
    void show()
    {
        cout << " within A1 show "
             << "a=" << a << endl;
    }
};
class A2
{
protected:
    int a;
public:
    void show()
    {
        cout << " within A2 show "
             << "a=" << a << endl;
    }
};
class C : public A1, public A2
{
public:
    void get()
    {
        A1::a = 10;
        A2::a = 20;
    }
};
int main()
{
    C ob;
    ob.get();
    ob.A1::show();
    ob.A2::show();
}