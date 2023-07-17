#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A(int a = 1)
    {
        this->a = a;
    }
    bool operator<(A &obj)
    {
        if (a < obj.a)

            return true;
        else
            return false;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob1(6), ob2(5), ob3(10);
    if (ob1 < ob2) // ob3=ob1.operator<(ob2);
        cout << "ob2 is greater ";
    else if (ob3 < ob1)
        cout << "ob1 is greater ";
    else if (ob2 < ob3)
        cout << "ob3 is greater: ";
    ob1.display();
    ob2.display();
    ob3.display();
}