#include <iostream>
using namespace std;
namespace ns1
{
    int a = 500;
    float b = 50.5F;
    void fun(int a = 0)
    {
        cout << "ns1 fun() " << a << endl;
    }
    namespace ns2
    {
        int a = 50;
        float b = 5.5F;

        void fun(int a)
        {
            cout << "ns2 fun() " << a << endl;
        }
    }
}
int main()
{
    using namespace ns1::ns2; // ok
    fun(10);                  // ok
    // using ns2::fun;  //ns2 has no independent existence
    // fun(5);
    using namespace ns1;
    fun();
    ns2::fun(100);
}