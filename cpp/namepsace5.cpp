#include <iostream>
using namespace std;
namespace ns1
{
    int a = 500;
    float b = 50.5F;
}
namespace ns2
{
    int a = 50;
    float b = 5.5F;
}
int main()
{
    using ns1::a;
    using ns1::b;
    cout << "ns1::a=" << a << "ns1::b=" << b << endl;
    // using ns2::a;    //ambiguity
    // using ns2::b;    //ambiguity
    cout << "ns2::a=" << ns2::a << "ns2::b=" << ns2::b << endl;
}