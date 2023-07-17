#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A(int a = 0)
    {
        this->a = a;
    }
    A *operator->()
    {
        return this;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob(5);
    ob->display(); // (ob.operator->())->display();
}