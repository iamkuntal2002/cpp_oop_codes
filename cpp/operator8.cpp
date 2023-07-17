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
    A operator++()
    {
        A temp;
        temp.a = ++a;
        return temp;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob1(5), ob2;
    ob2 = ++ob1; // ob1.operator++();
    ob1.display();
    ob2.display();
}