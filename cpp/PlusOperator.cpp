#include<iostream>
using namespace std;
class Test{
public:
    int a = 10;
    Test(){}
    Test(int a){
        this->a = a;
    }
    friend Test operator+(Test &ob1, Test &ob2){
        Test ob;
        ob.a = ob1.a+ob2.a;
        return ob;
    }
};
int main(){
    Test ob(10), ob2(20), ob3;
    ob3 = ob+ob2;     //+ operator on object
    cout<<ob3.a; //30
    
}