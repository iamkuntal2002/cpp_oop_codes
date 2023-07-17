#include<iostream>
using namespace std;
class A{
    public:
    virtual void fun() = 0;
    // {
    //     cout<<"Class A fun"<<endl;
    // }
};
class B : public A{
    public:
    void fun()
    {
        cout<<"Class B fun"<<endl;
    }
};
int main()
{
    A *ptr;
    B ob;
    ptr = &ob;
    ptr->fun();
}