#include <iostream>
using namespace std;
class Friend1{
private:
    int a = 10, b = 20;
public:
    void fun1(){
        cout << "this is " << a << " and " << b;
    }
    friend void get(Friend1 &); //declaring get fun as a friend
};
void get(Friend1 &ob){
    cout << "this is outside of class" << endl;
    cout << "a = " << ob.a << " b = " << ob.b << endl;
}
int main(){
    Friend1 ob;
    ob.fun1();
    get(ob);    //called normally
}