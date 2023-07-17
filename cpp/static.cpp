#include <iostream>
using namespace std;
class Sample
{
    int i;
    static int s;
public:
    void get()
    {
        i = 10;
        s++;
    }
    void print() // A non-static member method can access the static and non-static member variables
    {
        cout << "i=" << i << endl;
        cout << "s=" << s << endl;
    }
};
int Sample::s = 5;  //have to initialize the static variable in this way
int main()
{
    Sample sob1, sob2, sob3;
    sob1.get();
    sob1.print(); // 6
    sob2.print(); // 6
    sob3.print(); // 6
    sob2.get();
    sob1.print(); // 7
    sob2.print(); // 7
    sob3.print(); // 7
    sob3.get();
    sob1.print(); // 8
    sob2.print(); // 8
    sob3.print(); // 8
}