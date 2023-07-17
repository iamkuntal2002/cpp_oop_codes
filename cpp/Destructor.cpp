#include<iostream>
using namespace std;
class Destructor{
public:
    Destructor(){
        cout<<"this is a def constructor1"<<endl;
    }
    ~Destructor(){
        cout<<"this is a destructor1"<<endl;
    }
};
class Destructor2 : public Destructor{
public:
    Destructor2(){
        cout<<"this is a def constructor2"<<endl;
    }
    ~Destructor2(){
        cout<<"this is a destructor2"<<endl;
    }
};
int main(){
    Destructor2 ob;  
    // this is a def constructor1
    // this is a def constructor2   
    // this is a destructor2
    // this is a destructor1
}