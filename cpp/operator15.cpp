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
    bool operator&&(A &obj)
    {
        if (a && obj.a)

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
    if (ob1 && ob3) // ob3=ob1.operator&&(ob2);
        cout << "None of them is 0 \n";
    if (ob1 && ob2)
        cout << "None of them is 0 \n";
    ob1.display();
    ob2.display();
    ob3.display();
}