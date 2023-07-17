#include<bits/stdc++.h>
using namespace std;
class MultiOperator{
    int a = 10, b = 5;
public:
    MultiOperator(){}
    MultiOperator(int a, int b){
        this->a = a;
        this->b = b;
    }
    friend MultiOperator operator+(MultiOperator &ob1, MultiOperator ob2){
        cout<<"this is +"<<endl;
        MultiOperator ob;
        ob.a = ob1.a + ob2.a;
        ob.b = ob1.b + ob2.b;
        return ob;
    }
    friend MultiOperator operator*(MultiOperator &ob1, MultiOperator &ob2){
        cout<<"this is *"<<endl;
        MultiOperator ob;
        ob.a = ob1.a * ob2.a;
        ob.b = ob1.b * ob2.b;
        return ob;
    }
    void display(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
};
int main(){
    MultiOperator ob1(10,5), ob2(20,12), ob3(1,1);
    MultiOperator ob = ob1 + ob3 *ob2;
    ob.display();
    ob1.display();
    ob2.display();
    ob3.display();

}