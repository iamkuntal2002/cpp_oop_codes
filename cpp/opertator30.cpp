#include <iostream>
using namespace std;
class Source
{
    int s;
public:
    Source(int s)
    {
        this->s = s;
    }
    int get_s()
    {
        return s;
    }
};
class Dest
{
    int d;
public:
    Dest(int d = 0)
    {
        this->d = d;
    }
    Dest(Source sob)
    {
        d = sob.get_s();
    }
    void display()
    {
        cout << "d=" << d << endl;
    }
};
int main()
{
    Source s(5);
    Dest d;
    d = s; // d(s); //UDT to UDT
    d.display();
}