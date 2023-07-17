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
    friend ostream &operator<<(ostream &os, const A &t) 
    {
        os << t.a;
        return os;
    }
};
int main()
{
    A ob(10);
    cout << ob; // operator<<(cout,ob);
}