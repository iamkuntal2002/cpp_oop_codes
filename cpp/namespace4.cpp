#include <iostream>
using namespace std;
namespace ns1
{
    int a = 500;
    float b = 50.5F;
    namespace ns2 // nested namespace
    {
        float add(int x, float y)
        {
            a = x;
            b = y;
            return (a + b);
        }
    }
}
int main()
{
    cout << "ns1::a=" << ns1::a << "ns1::b=" << ns1::b << endl;
    cout << ns1::ns2::add(10, 20.5) << endl; // invoke a function of a nested namespace
    cout << "ns1::a=" << ns1::a << "ns1::b=" << ns1::b << endl;
}