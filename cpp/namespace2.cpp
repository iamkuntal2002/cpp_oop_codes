#include <iostream>
using namespace std;
namespace ns1
{
    void fun()
    {
        cout << "ns1 fun()"<<endl;
    }
}
namespace ns2
{
    void fun()
    {
        cout << "ns2 fun()"<<endl;
    }
}
int main()
{
    ns1::fun();
    ns2::fun();
}