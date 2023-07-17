#include<iostream>
using namespace std;
namespace ns1{
    int a= 10, b = 20;
    void fun(){
        cout<<"this is ns1 fun"<<endl;
    }
}
namespace ns2{
    int a = 30,b = 40;
    void fun(){
        cout<<"this is ns1 fun"<<endl;
    }
}
int main(){
    using ns2::a;   //no error, using declaration
    using ns2::b;   //no error, using declaration
    cout<<"ns2 a = "<<a<<" ns2 b = "<<b<<endl;
    using namespace ns1;    //using directive
    cout<<"ns1 a = "<<a<<" ns1 b = "<<b<<endl;  //ns2 values are shown
}