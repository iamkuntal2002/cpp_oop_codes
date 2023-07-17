#include <iostream>
using namespace std;
class Sample
{
    mutable int a;
    const int b, c;
public:
    Sample(int a = 0) : b(2), c(1) // a const data member is initialized in this way only
    {
        this->a = a;
        // c=a; 	          // a const data member cannot be initialized in this way
    }
    void get()
    {
        a = 1;
        //	c++;              // a const data member once initialized, cannot be changed
    }
    void set() const // read-only function
    {
        a++;    //can write because it is made mutable
        // b++;
        // c++;
        cout << "a=" << a << "b=" << b << "c=" << c << endl;
    }
};
int main()
{
    Sample s1(10);
    s1.set();
    s1.get();
    s1.set();
}