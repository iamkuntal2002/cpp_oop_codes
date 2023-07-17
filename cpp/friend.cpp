#include <iostream>
using namespace std;
class Y;    //forward declaration
class X
{
    int x;
public:
    X(int = 100);
    void display_x();
    friend void show(X, Y);     //friend function
};
X::X(int x)
{
    this->x = x;
}
void X::display_x()
{
    cout << "x=" << x << endl;
}
class Y
{
    int y;
public:
    Y(int = 100);
    void display_y();
    friend void show(X, Y); //friend function
};
Y::Y(int y)
{
    this->y = y;
}
void Y::display_y()
{
    cout << "y=" << y << endl;
}
void show(X obx, Y oby)
{
    cout << "Hello friend: " << obx.x << "  " << oby.y << endl;
}
int main()
{
    X ob1(5);
    ob1.display_x();
    Y ob2(15);
    ob2.display_y();
    show(ob1, ob2);
}