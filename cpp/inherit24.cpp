
#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base const: \n";
    }
    virtual ~Base()
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
    delete b_ptr;
}