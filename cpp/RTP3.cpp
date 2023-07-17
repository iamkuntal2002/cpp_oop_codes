#include <iostream>
using namespace std;
class A
{
public:
    virtual void display() // virtual function is used for RTP
    {
        cout << "Within A: \n";
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "Within B: \n";
    }
};
int main()
{
    A *ptr; //always create the pointer of the base class
    B ob;
    ptr = &ob;
    ptr->display();       //RTP is achieved as we have made the A class display function virtual
}