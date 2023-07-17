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
    A operator()(int x)
    {
        a = x;
        return *this;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob1(5), ob2;
    ob1.display();
    ob2.display();
    ob2 = ob1(6); // ob2=ob1.operator()(6);
    ob1.display();
    ob2.display();
}