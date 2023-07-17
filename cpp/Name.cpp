#include<iostream>
using namespace std;
namespace ns1{
    int a; int b;
    void fun(){
        cout<<"this is ns1 fun"<<endl;
    }
}
namespace ns2{
    int a; int b;
    void fun(){
        cout<<"this is ns2 fun"<<endl;
    }
}
int main(){
    ns1::a = 10, ns1::b = 20;   //we can also initialize them
    cout<<ns1::a<<" : "<<ns1::b<<endl;
    ns1::fun();
    ns2::a = 30, ns2::b = 40;
    cout<<ns2::a<<" : "<<ns2::b<<endl;
    ns2::fun();
}
