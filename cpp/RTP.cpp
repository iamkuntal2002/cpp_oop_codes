#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "A show:\n";
    }
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
    B ob;
    A *ptr;
    ptr = &ob;
    ptr->show(); // Runtime polymorphism is not implemented, the type of the class pointer (Base class A)decides which
                 // version of the show function is to be invoked.
}