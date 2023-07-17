#include <iostream>
using namespace std;
class X
{
    int x;
public:
    X(int = 100);
    void display();
};
X::X(int x)
{
    this->x = x;
}
void X::display()
{
    cout << "x=" << x << endl;
}
int main()
{
    X ob;
    ob.display();
    X ob1(5);
    ob1.display();
}