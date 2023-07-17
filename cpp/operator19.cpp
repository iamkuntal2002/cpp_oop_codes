#include <iostream>
using namespace std;
class Array
{
    int *a;
public:
    Array(int n)
    {
        a = new int[n];
        for (int i = 0; i < n; i++)
            a[i] = i + 1;
    }
    int operator[](int index) // no need to return the reference as the function call statement appears on the RHS of the = operator
    {
        return a[index];
    }
};
int main()
{
    Array ob(5);
    int x = ob[2]; // x=ob.operator[](2);
    cout << "x=" << x;
}