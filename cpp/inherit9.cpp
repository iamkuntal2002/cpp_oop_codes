#include <iostream>
using namespace std;
class A
{
    int x; // can neither be inherited or be accessed outside the class definition
public:
    A()
    {
        cout<<"within A def-constructor: \n";
    }
    
    A(int x)
    {
        cout << "within A param-constructor: \n";
    }
};
class B : public A
{
    int p;
public:
    B() : A()
    {
        cout << "within B-def constructor: \n";
    }
    B(int y) : A(y)
    {
        cout << "within B-param constructor: \n";
    }
};
int main()
{
    B ob;
    B ob1(10);
}
// output: 
// within A def-constructor: 
// within B-def constructor:
// within A param-constructor:
// within B-param constructor: