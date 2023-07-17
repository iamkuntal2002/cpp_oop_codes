#include <iostream>
using namespace std;
void print(int a, float f = 5.5)
{
    cout << "a=" << a << "f=" << f << endl;
}
int main()
{
    print(1);
    print(2.5);
    print(3.5F); // 2.5 is truncated and converted to 2 before being assigned to int a
}