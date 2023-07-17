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
    void print()    //a non-static function can access the both variables
    {
        cout << "i=" << i << endl;
        cout << "s=" << s << endl;
    }
    static void display()
    {
        // cout<<"i="<<i<<endl;  //A non-static variable cannot be accessed from a static method
        cout << "s=" << s << endl;
    }
};
int Sample::s = 5;
int main()
{
    Sample sob1, sob2;
    sob1.get();
    sob1.display();
    sob2.display();
    Sample::display();  //static function can be invoked using the Class name followed by :: operator
}