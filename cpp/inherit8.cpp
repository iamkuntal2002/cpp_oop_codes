#include <iostream>
using namespace std;
class A
{
    int x; // can neither be inherited or be accessed outside the class definition
protected:
    int y; // they can be inherited, but not accessible outside the class definition
public:
    int z;
    A(int x) //A param constructor
    {
        cout << "within A constructor: \n";
        x = 0;
        y = 1;
        z = 2;
    }
};
class B : public A
{
    int p;
protected: // y  will come here
    int q;
public: // z will come here
    int r;
    B() : A(5)  //to invoke the A param constructor, or it will show an error
    {
        cout << "within B constructor: \n";
        p = 3;
        q = 4;
        r = 5;
    }
};
int main()
{
    B ob;
}