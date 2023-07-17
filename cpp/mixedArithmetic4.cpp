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
    A operator+(A x)
    {
        cout << "int converted to UDT: \n";
        A t;
        t.a = a + x.a;
        return t;
    }
    A operator+(int x)
    {
        cout << "int remains same: \n";     //this version will be invoked
        A t;
        t.a = a + x;
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
    ob2 = ob1 + 10; // ob2=ob1.operator+(A(10)); //ob2=ob1.operator+(10);
    ob2.display();
}