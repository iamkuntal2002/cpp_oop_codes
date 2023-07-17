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
    friend A operator++(A &ob, int)
    {
        A temp;
        temp.a = ob.a++;
        return temp;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
    friend A operator+(A ob1, A &ob2)
    {
        A temp;
        temp.a = ob1.a + ob2.a;
        return temp;
    }
};
int main()
{
    A ob1(5), ob2(6), ob3;
    ob3 = ob1++ + ob2; // operator++(ob1,int);
    ob1.display();
    ob2.display();
    ob3.display();
}