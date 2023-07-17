#include <iostream>
using namespace std;
namespace ns1
{
    int p, q;
}
namespace ns2
{
    int x, y;
}
namespace ns1 // namespace extension or discontiguous namespace
{
    int a, b;
}
int main()
{
    ns1::a = 1;
    ns1::b = 2;
    ns1::p = 10;
    ns1::q = 20;
    ns2::x = 100;
    ns2::y = 200;
    namespace one = ns1;    // namespace alias
    namespace two = ns2;    //namespace alias
    cout << ns1::a << " " << ns1::b << "  " << ns1::p << "  " << ns1::q << " "<<endl;
    cout << ns2::x << " " << ns2::y << "  "<<endl; // both the current name and new name will exist
    two::x = 500;
    two::y = 600;
    cout << two::x << " " << two::y << "  "<<endl;
}