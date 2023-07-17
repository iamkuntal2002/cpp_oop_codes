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
    using namespace ns1; // using directive
    cout << "ns1::a=" << a << "ns1::b=" << b << endl;
    using ns2::a; // priority of using declaration is greater than
    using ns2::b; // the priority of the using directive
    cout << "ns2::a=" << a << "ns2::b=" << b << endl;
}