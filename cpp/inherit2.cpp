#include <iostream>
using namespace std;
class A
{
    int x; // can never be inherited
public:
    void get()
    {
        x = 10;
        cout<<"A class get()"<<endl;
    }
    void print()
    {
        cout<<"A class print()"<<endl;
        cout << "x=" << x;
    }
};
class B : public A
{
public:
    void fun()
    {
        A::get();   //member functions of base class can be called in this way
        A::print();
    }
};
int main()
{
    B ob;
    ob.fun();
}