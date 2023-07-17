#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A(int x = 0)
    {
        a = x;
    }
    friend A operator+(A x, A ob)
    {
        cout << "int converted to UDT: \n";
        A t;
        t.a = ob.a + x.a;
        return t;
    }
    friend A operator+(int x, A &ob)
    {
        cout << "int remains same: \n";
        A t;
        t.a = ob.a + x;
        return t;
    }
    void display()
    {
        cout << "a=" << a << endl;
    }
};
int main()
{
    A ob1(5), ob2;
    ob2 = ob1 + 10; // NOT ob2=ob(10).operator+(ob1)); //NOT ob2=ob(10).operator+(10);
                    //  ob2=operator+(ob(10),ob1);
    ob2.display();
}