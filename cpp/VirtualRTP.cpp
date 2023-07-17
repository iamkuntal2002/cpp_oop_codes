#include <iostream>
using namespace std;
class A{
public:
    virtual void display(){  // virtual function is used for RTP
        cout << "Within A: \n";
    }
};
class B : public A{
public:
    void display(){
        cout << "Within B: \n";
    }
};
int main(){
    A *ptr;
    B ob;
    ptr = &ob;
    ptr->display(); //Within B
    // RTP is achieved as we have made the A class display function virtual
                
}