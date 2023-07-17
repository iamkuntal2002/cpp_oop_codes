#include <iostream>
using namespace std;
class A1
{
public:
A1()
{
    cout<<"class A constructor"<<endl;
}
    void show()
    {
        cout << " within A1 show \n";
    }
};
class A2
{
public:
    A2()
    {
        cout<<"class A2 constructor"<<endl;
    }
    void show()
    {
        cout << " within A2 show \n";
    }
};
class C : public A1, public A2
{
};
int main()
{
    C ob;
    ob.show(); // Error, since show() is inherited from both the base classes, so ambiguity occurs
}