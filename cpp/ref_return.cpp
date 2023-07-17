#include <iostream>
using namespace std;
int &fun(int &x, int &y) // called by value, but returning reference
{
    if (x < y)
        return x;
    else
        return y;
}
int main()
{
    int a = 10, b = 5;
    fun(a, b) = -1;
    cout << "a=" << a << endl; // a = 10
    cout << "b=" << b << endl; // b = -1
    // in this case we first pass a = 10 and b = 5 to the function fun(), then fun()returns the address of y, and y = b;so b will be updated to - 1;
}