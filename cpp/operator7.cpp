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
    void operator++()
    {
        a++;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob1(5);
    ++ob1; // ob1.operator++();
    ob1.display();
}