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
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob = 2; // conversion from BDT to UDT
    ob.display();
    A ob1(3);
    ob1.display();
}