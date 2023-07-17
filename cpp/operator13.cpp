#include <iostream>
using namespace std;
class A
{

    int a;
public:
    A(int a = 0)
    {
        this->a = a;
    }
    A operator++()
    {
        cout<<"++ operator"<<endl;
        A temp;
        temp.a = ++a;
        return temp;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
    A operator*(A ob)   //last executed overloaded function will pass by value
    {
        cout<<"* operator"<<endl;
        A temp;
        temp.a = a * ob.a;
        return temp;
    }
    A operator+(A &ob)
    {
        cout<<"+ operator"<<endl;
        A temp;
        temp.a = a + ob.a;
        return temp;
    }
};
int main()
{
    A ob1(5), ob2(6), ob3;
    ob3 = ob1 * (++ob1 + ob2); //(ob1.operator++(int)).operator+(ob2);
    ob1.display();
    ob2.display();
    ob3.display();
}