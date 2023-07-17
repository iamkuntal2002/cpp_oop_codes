#include <iostream>
using namespace std;
namespace ns1{
    int a = 10;
    void fun(){
        cout << "this is ns1 fun" << endl;
    }
    class sample{
    public:
        void fun()
        {
            cout << "this is ns1 fun" << endl;
        }
    };
    class sample2;  //only declared
}
class ns1::sample2{
public:
    void fun()
    {
        cout << "this is ns1 fun" << endl;
    }
};
int main(){
    ns1::fun();
    ns1::sample ob1;
    ob1.fun();
    ns1::sample2 ob2;
    ob2.fun();
}