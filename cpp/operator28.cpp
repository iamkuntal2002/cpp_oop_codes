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
    A ob = 2; // BDT to UDT
    ob.display();
    int x = ob; //UDT to BDT
    cout << "x=" << x << endl;
}