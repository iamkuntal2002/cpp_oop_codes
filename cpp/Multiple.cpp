#include<iostream>
using namespace std;
class Multiple1{
    int a = 10;
public:
    void fun(){
        cout<<"this is Multiple1 fun1"<<endl;
    }
};
class Multiple2{
    int b = 20;
public:  
    void fun(){
        cout<<"this is Multiple2 fun2"<<endl;
    }
};
class Multiple3 : public Multiple1 , public Multiple2{
    int c = 30;
public:
    void fun(){
        cout<<"this is Multiple3 fun3"<<endl;
    }
};
int main(){
    Multiple3 ob;
    ob.fun();   //only invoked the Multiple3 fun
    ob.Multiple1::fun();
    ob.Multiple2::fun();
}
