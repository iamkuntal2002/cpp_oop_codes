#include <iostream>
using namespace std;
namespace ns1
{
    int a, b;
}
namespace ns2 // multiple namespaces may have same variable names
{
    int a, b;
}
int main()
{
    int a = 10, b = 20;
    cout << "a=" << a << "b=" << b<<endl;
    ns1::a = 1; // fully qualified name
    ns1::b = 2;
    cout << "ns1 a = " << ns1::a;
    cout << "ns1 b = " << ns1::b<<endl;
    ns2::a = 1;
    ns2::b = 2;
    cout << "ns2 a = " << ns2::a; // fully qualified name
    cout << "ns2 b = " << ns2::b;
}