#include<iostream>
using namespace std;
class PureVirtual{
public:
    virtual void fun() = 0;
};
class PureVirtual2 : public PureVirtual{
public: 
    void fun(){
        cout<<"this is fun in Child class"<<endl;
    }
};
int main(){
    PureVirtual2 ob;    //okk   
    ob.fun();   //okk
}