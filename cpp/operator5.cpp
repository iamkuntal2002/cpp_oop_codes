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
    friend A operator*(A &obj1, A &obj2)
    {
        A temp;
        temp.a = obj1.a * obj2.a;
        return temp;
    }
    friend A operator+(A obj1, A &obj2) //first parameter should pass by value
    {
        A temp;
        temp.a = obj1.a + obj2.a;
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
    ob3 = ob1 * ob2 + ob3; // ob3=operator+(operator*(ob1,ob2),ob3);
    ob1.display();
    ob2.display();
    ob3.display();
}