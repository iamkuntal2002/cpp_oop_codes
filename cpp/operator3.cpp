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
    A operator*(A &obj)
    {
        A temp;
        temp.a = a * obj.a;
        return temp;
    }
    A operator+(A &obj)
    {
        A temp;
        temp.a = a + obj.a;
        return temp;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob1(6), ob2(5), ob3(10);
    ob3 = ob1 * ob2 + ob3; // ob3=(ob1.operator*(ob2)).operator+(ob3);
    ob1.display();
    ob2.display();
    ob3.display();
}