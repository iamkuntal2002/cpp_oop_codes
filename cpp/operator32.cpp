#include <iostream>
using namespace std;
class Dest
{
    int d;
public:
    Dest(int d = 0)
    {
        this->d = d;
    }
    void display()
    {
        cout << "d=" << d << endl;
    }
};
class Source
{
    int s;
public:
    Source(int s)
    {
        this->s = s;
    }
    operator Dest()
    {
        return Dest(s);
    }
};
int main()
{
    Source s(5);
    Dest d;
    d = s;
    d.display();
}