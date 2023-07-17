#include <iostream>
using namespace std;
class A
{
public:
    int a;
    A(int a = 0)
    {
        this->a = a;
    }
    A *operator->()
    {
        cout << "operator overloaded version called: "<<endl;
        return this;
    }    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob(5);
    ob.display(); // (ob.operator->())->display();
    ob->a = 200; //(ob.operator->())->a=200;
    ob.display();
}