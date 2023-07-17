#include <iostream>
using namespace std;
class A
{
    int x; // can neither be inherited or be accessed outside the class definition
protected:
    int y; // they can be inherited, but not accessible outside the class definition
public:
    int z;
};
class B : public A
{
    int p;
protected: // y will come here
    int q;
public: // z will come here
    int r;
    void print()
    {
        cout << "z=" << z << "r=" << r;
    }
};
int main()
{
    B ob;
    // ob.x=1;  //error
    // ob.y=2;  //error
    ob.z = 3; // ok
    // ob.p=4;   //error
    // ob.q=5;   //error
    ob.r = 6; // ok
    ob.print();
}