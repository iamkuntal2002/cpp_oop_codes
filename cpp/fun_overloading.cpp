#include <iostream>
using namespace std;
class Sample
{
    int a;
    float b;
public:
    void sum(int x, int y)
    {
        a = x;
        b = y;
        cout << "version 1: sum=" << a + b << endl;
    }
    void sum(int x, float y)
    {
        a = x;
        b = y;
        cout << "version 2: sum=" << a + b << endl;
    }
    void sum(double x, int y)
    {
        a = y;
        b = x;
        cout << "version 3: sum=" << a + b << endl;
    }
    void sum(double x, double y)
    {
        a = x;
        b = y;
        cout << "version 4: sum=" << a + b << endl;
    }
};
int main()
{
    Sample ob;
    ob.sum(1, 2);
    ob.sum(1, 2.5F);
    ob.sum(1.5F, 3);
    ob.sum(1.5F, 2.5F);
}
