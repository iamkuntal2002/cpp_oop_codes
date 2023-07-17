#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A(int a = 0)
    {
        this->a = a;
        cout << "const called: \n";
    }
    operator int()
    {
        return a;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob = 2;
    ob.display();
    int x = ob; // UDT->BDT
    cout << "x=" << x << endl;

    cout << "size of x=" << sizeof(x);
    cout << "size of the object=" << sizeof(ob);
}