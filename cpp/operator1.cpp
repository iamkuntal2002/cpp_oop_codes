#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A(int x)
    {
        a = x;
    }
    void operator+(A t)
    {
        a += t.a;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob1(50), ob2(60);
    ob1 + ob2; // ob1.operator+(ob2);
    ob1.display();
    ob2.display();
}