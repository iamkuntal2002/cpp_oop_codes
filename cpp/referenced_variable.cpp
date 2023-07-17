#include <iostream>
using namespace std;
int main()
{
    int a = 10; // a is a normal integer variable
    int &b = a; // b is a reference variable
    a++;
    cout << " a=" << a << "b=" << b << endl; // a=11, b=11
    b++;
    cout << " a=" << a << "b=" << b << endl; // a=12, b=12
}