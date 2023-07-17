#include <iostream>
using namespace std;

class A
{
public:
    virtual void show() = 0; // if a class is having a PVF, then all the derived classes must have their own definition of this PVF. Otherwise error is reported.
};

class B : public A
{
public:
    void show()
    {
        cout << "B show: \n";
    }
};

int main()
{
    A *ptr_A;
    B obB;

    ptr_A = &obB;
    ptr_A->show();
}