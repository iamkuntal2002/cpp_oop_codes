#include <iostream>
using namespace std;
class A
{
    int *a;
    static int size;
public:
    A(int x = 5)
    {
        size = x;
        a = new int[x];
    }
    friend istream &operator>>(istream &is, A &t)
    {
        for (int i = 0; i < size; i++)
            is >> t.a[i];

        return is;
    }
    friend ostream &operator<<(ostream &os, const A &t)
    {
        for (int i = 0; i < size; i++)
            os << t.a[i] << " ";
        return os;
    }
};
int A::size; // if the member variable size is static, then access it outside the class using :: operator
int main()
{
    A ob(5);
    cout << "Enter the value of the object: ";
    cin >> ob; // operator>>(cin,ob);
    cout << ob; // operator<<(cout,ob);
}