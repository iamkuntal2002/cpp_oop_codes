#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base const: \n";
    }
    virtual ~Base() = 0; // pure virtual destructor
};
Base::~Base()   //define the base pure virtual destructor
{
    cout << "Base pure virtual dest: \n";
}
class Derv : public Base
{
public:
    Derv()
    {
        cout << "Derv const: \n";
    }
    ~Derv()
    {
        cout << "Derv dest: \n";
    }
};
int main()
{
    Base *b_ptr = new Derv; //for this line the destructors are never invoked
    delete b_ptr;   //for this line destructor are invoked
    cout<<endl;
    // Base ob; //a calls havind pure virtual destructor are cannot instantiated
    Derv ob;    //for the line all the cons and dest are invoked
    

}