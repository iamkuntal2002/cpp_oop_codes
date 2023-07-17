#include<bits/stdc++.h>
using namespace std;
class test1{
public:
    virtual void fun1(){
        cout<<"this is test1 fun1"<<endl;
    }
};
class test2 : public test1{
public:
    void fun1(){
        cout<<"this is test2 fun1"<<endl;
    }
};
class test3 : public test1{
public:
    void fun1(){
        cout<<"this is test3 fun1"<<endl;
    }
};
int main(){
    test1 *ob1; test2 ob2; test3 ob3;
    // ob1->fun1(); //
    ob1 = &ob2;
    ob1->fun1();    //test2 fun called    
    //if not virtual then base class method will be called
    //if virtual then derived class metod will be called
    ob1 = &ob3;
    ob1->fun1();    //test3 fun called
}