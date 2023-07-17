#include <iostream>
using namespace std;
class Sample
{
    int a;
    static int i;
public:
    Sample() // def-constructor
    {
        cout << "def_constructor called \n";
        a = 1;
        i++;
    }
    void display()
    {
        cout << "a=" << a << "i=" << i << endl;
    }
    ~Sample() // takes no param.. so overloading not possible
    {
        cout << "\n destructor called: ";
    }
};
int Sample::i = 1; // initialize the static member variable, [if other than 0]
int main()
{
    Sample s[10];
    s[1].display();
    s[2].display();
    Sample s3;
    s3.display();
}
/*output:
def_constructor called 
def_constructor called
def_constructor called
def_constructor called
def_constructor called
def_constructor called
def_constructor called
def_constructor called
def_constructor called
def_constructor called
a=1i=11
a=1i=11
def_constructor called
a=1i=12

 destructor called:
 destructor called:
 destructor called:
 destructor called:
 destructor called:
 destructor called:
 destructor called:
 destructor called:
 destructor called:
 destructor called:
 destructor called:*/