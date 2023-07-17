#include <iostream>
using namespace std;
class Sample
{
    int x, y;
public:
    Sample(int a, int b)
    {
        x = a;
        y = b;
    }
    Sample *set_x(int a1)
    {
        x = a1;
        return this;
    }
    Sample *set_y(int b1)
    {
        y = b1;
        return this;
    }
    void display()
    {
        cout << "x=" << x << "y=" << y << endl;
    }
};
int main()
{
    Sample ob(5, 15);
    ob.display();
    Sample *ptr = &ob;
    ptr->set_x(20)->set_y(30)->display(); // function call chaining
}