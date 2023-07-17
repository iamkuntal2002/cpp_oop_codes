#include <iostream>
using namespace std;
class A
{
public:
    virtual void display() = 0; // pure virtual function
};
class B : public A
{
public:
    void display()
    {
        cout << "Within B: \n";
    }
};
class C : public B
{
};
int main()
{
    A *pt1, *pt2;
    B ob1;
    C ob2;
    pt1 = &ob1;
    pt2 = &ob2;
    pt1->display(); // B
    pt2->display(); // B
}