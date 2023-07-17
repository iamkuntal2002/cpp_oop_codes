#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A(int x = 0)
    {
        a = x;
    }
    friend istream &operator>>(istream &is, A &t)
    {
        is >> t.a;
        return is;
    }
    friend ostream &operator<<(ostream &os, const A &t)
    {
        os << t.a;
        return os;
    }
};
int main()
{
    A ob(10);
    cout << "Enter the value of the object: ";
    cin >> ob; // operator>>(cin,ob);
    cout << ob; // operator<<(cout,ob);
}