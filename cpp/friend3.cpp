#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    A(int a = 10)
    {
        this->a = a;
    }
    void print(B ob)    //not possible, though we make the A class frined to class B
    {
        cout<<"B ob b = "<<ob.b<<endl;
    }
    friend class B; // B is declared to be a friend of class A
};
class B
{
    int b;
public:
    B(int b = 5)
    {
        this->b = b;
    }
    void print(A &ob) // pass by reference takes less space than pass by value
    {
        cout << "A ob a = " << ob.a;
    }
    friend class A;
};
int main()
{
    A obA(50);
    B obB(60);
    obB.print(obA);
    obA.print(obB);
}