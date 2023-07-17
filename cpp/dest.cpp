#include <iostream>
using namespace std;
class Sample
{
    int a, b;
public:
    Sample() // def-constructor
    {
        cout << "def_constructor called \n";
        a = 1;
        b = 2;
    }
    Sample(int x) // a one-param constructor
    {
        cout << "one_param_constructor called \n";
        a = x;
        b = 2 * x;
    }
    Sample(int x, int y)
    {
        cout << "two_param_constructor called \n";
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a=" << a << "b=" << b << endl;
    }
    ~Sample() // takes no param.. so overloading not possible
    {
        cout << "destructor called: "<<endl;
    }
};
int main()
{
	Sample s1(10);
	s1.display();
	Sample s2; 
	s2.display();
	Sample s3(10,15);
	s3.display();	
}