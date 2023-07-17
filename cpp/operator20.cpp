#include <iostream>
using namespace std;
class Array
{
    int *a;
    int size;
public:
    Array(int n)
    {
        a = new int[n];
        size = n;

        for (int i = 0; i < n; i++)
            a[i] = i + 1;
    }
    int &operator[](const int &index) // returning a reference is MUST
    {
        return a[index];
    }
    void display()
    {
        for (int i = 0; i < size; i++)
            cout << a[i] << "  ";
    }
};
int main()
{
    Array ob(5);
    ob[1] = 20; // ob.operator[](2)=20;  //as the func call statement appears on the LHS of = operator,the function must return the reference
    ob.display();
}