#include <iostream>
using namespace std;
// class B;

class A
{
    int a;

public:
    A(int a = 10)
    {
        this->a = a;
    }

    void display()
    {
        cout << "a=" << a << endl;
    }
    friend void swap(A &, B &);
};

class B
{
    int b;

public:
    B(int b = 5)
    {
        this->b = b;
    }

    void display()
    {
        cout << "b=" << b << endl;
    }
    friend void swap(A &, B &);
};

void swap(A &aa, B &bb)
{
    int t;
    t = aa.a;
    aa.a = bb.b;
    bb.b = t;
}

int main()
{
    A obA(100);
    B obB(200);
    swap(obA, obB);

    obA.display();
    obB.display();
}