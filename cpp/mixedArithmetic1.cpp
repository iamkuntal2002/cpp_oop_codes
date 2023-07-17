#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A(int x = 0)
    {
        a = x;
    }
    A operator+(A ob)
    {
        A t;
        t.a = a + ob.a;
        return t;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob1(5), ob2;
    ob2 = ob1 + 10; // ob2=ob1.operator+(A(10))
    ob2.display();
}