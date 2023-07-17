#include<iostream>
using namespace std;
namespace ns1{
    int a =10, b;
    void fun(){
        cout<<"this is ns1 fun"<<endl;
    }
    namespace ns2{
        int c = 20, d;
        void fun2(){
            cout<<"this is ns2 fun"<<endl;
        }
    }
}
int main(){
    ns1::b = 30;
    cout<<ns1::a<<" : "<<ns1::b<<endl;
    ns1::fun();
    ns1::ns2::d = 40;
    cout<<ns1::ns2::c<<" : "<<ns1::ns2::d<<endl;
    ns1::ns2::fun2();
}