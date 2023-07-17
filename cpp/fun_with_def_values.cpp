#include <iostream>
using namespace std;
class Sample{
    int a;
    float b;
public:
    void sum(int x = 2, float y = 1.0)
    {
        a = x;
        b = y;
        cout << "version 1: sum=" << a + b << endl;
    }
};
int main()
{
    Sample ob;
    ob.sum();
    ob.sum(10);
    ob.sum(10, 20);
    ob.sum(1, 2.5F);
    ob.sum(1.5F, 3);
    ob.sum(1.5F, 2.5F);
}