#include <iostream>
using namespace std;
class A
{
public:
    virtual void display() = 0; // pure virtual function, 0 is assigned to nowhere it is just an indication to the 
                                //compiler that it is pure virtual func and has no body
};

class B : public A
{
public:
    void display()  //must be defined in child class as this function is made pure virtual function in the base class
    {
        cout << "Within B: \n";
    }
};
class C : public A
{
public:
    void display()  //must be defined in child calss as this function is made pure virtual function in the base class
    {
        cout << "Within C: \n";
    }
    void print()
    {
        cout << "Within C print: \n";
    }
};
int main()
{
    A *pt1, *pt2;
    B ob1;
    C ob2;
    pt1 = &ob1;
    pt2 = &ob2;
    pt1->display();
    pt2->display();
    ob2.print();
}