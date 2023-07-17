
#include <iostream>
using namespace std;
namespace ns
{
    int a = 500;
    class Sample
    {
        int a; // member variable of Sample class is visible only within the class definition
    public:
        Sample(int a = 0)
        {
            this->a = a;
        }
        void display()
        {
            cout << "in display sample ns"
                 << "a=" << a << endl;
            cout << "a of ns=" << ns::a << endl;
        }
    };
    void display()
    {
        cout << "in display ns "
             << "a=" << a << endl; // namespace member
    }
}
int main()
{
    ns::display();
    ns::Sample s1;
    s1.display();
    ns::Sample s2(10);
    s2.display();
}