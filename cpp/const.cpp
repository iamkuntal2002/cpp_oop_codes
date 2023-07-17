#include<iostream>
using namespace std;
// class Const{
//     const int a ;
//     const int b ;
//     mutable int c = 6;
//     public:
//     Const():a(1), b(2) {    //const vars initialized by constructor
//     }
//     void print() const{
//         // a++;       //error
//         c++;        
//         cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
//     }
// };
// int main(){
//     Const ob;
//     ob.print();
// }
class Const{
    const int a, b;
    public:
    int c= 10;
    Const(): a(1), b(2){
    }
    void print() const{
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    void fun(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
};
int main(){
    const Const ob;
    // ob.fun();    //error
    ob.print();     //ok
    cout<<ob.c;     //okk
}