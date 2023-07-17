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
    friend A operator+(A ob, int x)
    {
        A t;
        t.a = ob.a + x;
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
    ob2 = ob1 + 10; // ob2=operator+(ob1,10);
    ob2.display();
}