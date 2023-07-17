#include<iostream>
using namespace std;
namespace ns1{
    void fun1(){
        cout<<"this is fun1"<<endl;
    }
    void fun2(){
        cout<<"this is fun1"<<endl;
    }
    void fun3(){
        cout<<"this is fun1"<<endl;
    }
}
int main(){
    using ns1::fun2;
    fun2(); //now if any fun2() is called then
            //the ns1 fun2 will be invoked
}