#include <iostream>
using namespace std;
class A
{
    int x; // can never be inherited, because it is private member variable
public:
    void get()
    {
        x = 10;
    }
    void print()
    {
        cout << "x=" << x;
    }
};
class B : public A
{

};
int main()
{
    B ob;
    ob.get();
    ob.print();
}