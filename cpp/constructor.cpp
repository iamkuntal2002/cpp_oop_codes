#include<iostream>
using namespace std;
class Constructor{
    int a ,b;
    public:
    Constructor(){      //default constructor
        cout<<"default constructor"<<endl;
        a = 5;b = 10;
    }
    Constructor(int a,int b){       //parameterized constructor
        cout<<"param constructor"<<endl;
        this->a= a; this->b = b;    
    }
    Constructor(Constructor &ob){       //copy constructor
        cout<<"copy constructor"<<endl;
        this->a = ob.a; this->b = ob.b;
    }
};
int main(){
    Constructor ob1;      //default constructor
    Constructor ob2(1,5);   //param constructor
    Constructor ob3;    //default constructor
    Constructor ob4 = ob3;      //copy constructor
}
