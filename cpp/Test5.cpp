#include<iostream>
using namespace std;
class Test{
    int a;
public:
    Test(int a = 0){
        this->a = a;
    }
    Test operator+(int a){
        cout<<"int remain int"<<endl;
        Test ob;
        ob.a += a;
        return ob;
    }
    friend Test operator+(Test &ob){
        cout<<"int converted to object"<<endl;
        Test obj;
        obj.a += ob.a;
        return obj;
    }
};
int main(){
    Test ob(10),ob3(4), ob2;
    ob2 = ob+5;
}