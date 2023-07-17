#include<iostream>
using namespace std;
class Multi1{
    int a = 10;
public:
    Multi1(){
        cout<<"this is Multiple1 def const"<<endl;
    }
    void fun1(){
        cout<<"this is Multiple1 fun"<<endl;
    }
};
class Multi2 : public Multi1{
    int b = 20;
public:
    Multi2(int a){
        cout<<"this is Multiple2 param const"<<endl;
    }
    void fun2(){
        cout<<"this is Multiple2 fun2"<<endl;
        Multi1::fun1();
    }
};
class Multi3 : public Multi2{
    int c = 30;
public:
    Multi3() : Multi2(3){
        cout<<"this is Multiple3 def const"<<endl;
    }
    void fun3(){
        cout<<"this is Multiple3 fun3"<<endl;
        Multi2::fun2();
    }
};
int main(){
    Multi3 ob;
    ob.fun3();
}