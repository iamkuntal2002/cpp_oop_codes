#include <iostream>
using namespace std;
void fun(int x)
{
    cout << "global \n";
}
namespace // unnamed namespace
{
    void fun(int x = 0)
    {
        cout << "hi " << x;
    }
}
int main()
{

    ::fun(1);
}