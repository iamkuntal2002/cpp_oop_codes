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
    A operator^(A &obj)
    {
        A temp;
        temp.a = a ^ obj.a;
        return temp;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob1(5), ob2(14), ob3(10), ob4;
    ob4 = ob1 ^ ob3; // ob4=ob1.operator^(ob3);
    ob4.display();
    ob4 = ob3 ^ ob2;
    ob4.display();
}