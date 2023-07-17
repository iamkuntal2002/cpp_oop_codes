#include <iostream>
using namespace std;
class B
{
    int a;
protected:
    int b;
public:
    B(int a)
    {
        this->a = a;
    }
    void show()
    {
        cout << "a=" << a << "b=" << b << endl;
    }
};
class C1 : public B
{
public:
    C1() : B(5)
    {
        b = 10;
    }
};
class C2 : public B
{
public:
    C2() : B(6)
    {
        b = 20;
    }
};
int main()
{
    C1 ob;
    ob.show();
    C2 ob2;
    ob2.show();
}