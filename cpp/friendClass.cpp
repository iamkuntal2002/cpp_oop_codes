#include<iostream>
using namespace std;
class A{
    int a = 10;
protected:
    int b = 20;
public:
    void fun(){
        cout<<"this is class A fun"<<endl;
    }
    friend class B;
};
class B{
public:
    void print(A &ob){
        cout<<"a = "<<ob.a<<" b = "<<ob.b<<endl;
    }
};
int main(){
    A ob;
    B ob2;
    ob2.print(ob);
}