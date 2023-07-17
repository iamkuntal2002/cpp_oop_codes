#include<iostream>
using namespace std;
class chain{
    public:
    chain* fun1(){
        cout<<"this is fun1"<<endl;
        return this;
    }
    chain fun2(){
        cout<<"this is fun2"<<endl;
        return *this;
    }
    void fun3(){
        cout<<"this is fun3"<<endl;
    }
};
int main(){
    chain ob;
    ob.fun1()->fun2().fun3();
}