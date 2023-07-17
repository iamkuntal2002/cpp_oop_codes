#include<iostream>
using namespace std;
class Demo{
    int a;
    public:
    Demo()
    {
        a = 20;
        cout<<"default constructor a = "<<a<<endl;
    }
    Demo(int a = 50)    //work as default as well as a param constructor
    {
        this->a = a;
        cout<<"param constructor a = "<<a<<endl;
    }
};
int main()
{
    //Demo ob;    //error
    Demo ob2(10);
    Demo ob3(30);
}