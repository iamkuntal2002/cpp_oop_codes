#include<iostream>
using namespace std;
class Base{
    int a = 10;
public:
    Base(){
        cout<<"this is Base def const"<<endl;
    }
    Base(int a){
        cout<<"this is base param const"<<endl;
    }
    void fun1(){
        cout<<"this is Base class fun"<<endl;
    }
};
class Child : public Base{
    int b = 20;
public: 
    Child(): Base(2){   //invoking the Base param constructor
        cout<<"this is Child def const"<<endl;
    }
    void fun2(){
        cout<<"this is Child class fun"<<endl;
        Base ::fun1();  //invoking the Base class method
    }
};
int main(){
    Child ob;
    ob.fun1();
    ob.fun2();
}