#include <iostream>
using namespace std;

class A
{
public:
    virtual void show() // RTP is implemented ,
    {
        cout << "A show:\n";
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "B show: \n";
    }
};
int main()
{
    B ob;
    A *ptr;

    ptr = &ob;
    ptr->show(); // derived class show function is invoked.
}