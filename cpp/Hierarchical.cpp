#include<iostream>
using namespace std;
class HierarBase{
    int a =10;
public:
    void fun1(){
        cout<<"this is HierarBase fun1"<<endl;
    }
};
class HierarChild1 : public HierarBase{
    int b = 20;
public:
    void fun2(){
        cout<<"this is HierarChild1 fun2"<<endl;
        HierarBase::fun1();
    }
};
class HierarChild2 : public HierarBase{
    int c = 30;
public:
    void fun3(){
        cout<<"this is HierarChild2 fun3"<<endl;
        HierarBase::fun1();
    }
};
int main(){
    HierarChild1 ob1;
    HierarChild2 ob2;
    ob1.fun2();
    ob2.fun3();
}