
#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base const: \n";
    }
    ~Base()
    {
        cout << "Base dest: \n";
    }
};
class Derv : public Base
{
public:
    Derv()
    {
        cout << "Derv const: \n";
    }
    ~Derv()
    {
        cout << "Derv dest: \n";
    }
};
int main()
{
    Base *b_ptr;
    Derv d;
    b_ptr = &d;
    delete b_ptr; // Derv class destructor is never called, only Base class is destructed..
}