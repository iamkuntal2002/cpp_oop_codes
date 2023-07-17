#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A(int x = 0)
    {
        a = x;
    }
    A operator-(A t)
    {
        a = this->a - t.a;
        return *this;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob1(50), ob2(60), ob3(1);
    ob1 - ob2; // ob1.operator-(ob2);
    ob1.display();
    ob3 = ob1 - ob2;
    ob3.display();
}
// output:
// a=-10
// a=-70
