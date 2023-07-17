#include <iostream>
using namespace std;
class Point
{
    int x, y;
public:
    void getData(int x, int y)
    {
        this->x = x;
        (*this).y = y;  //this->y = y;
        this->fun(); // correct
    }
    void putData()
    {
        cout << "x=" << this->x;
        cout << "y=" << (*this).y;
    }
    static void fun()
    {
        cout << " \n Hi ";
        // this->putData();  //incorrect
    }
};
int main()
{
    Point ob;
    ob.getData(1, 2);
    ob.putData();
    Point::fun();
    ob.fun();
}