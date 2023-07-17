#include <iostream>
using namespace std;
class Sample
{
    int x, y;
public:
    Sample(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    Sample(const Sample &s) // copy constructor must have to take reference
    {
        cout << "copy constructor called \n";
        x = s.x;
        y = s.y;
    }
    void display()
    {
        cout << "x=" << x << "y=" << y << endl;
    }
};
int main()
{
    Sample s1(10, 20);
    Sample s2(s1); // copy const
    Sample s3(s2); // copy const
    s3.display();
    Sample s4 = s1; // copy const
    s4.display();
    Sample s5;
    s5 = s4; // member by member copied , copy constructor not invoked
    s5.display();
}