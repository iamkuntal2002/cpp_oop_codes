#include<bits/stdc++.h>
using namespace std;
class test{
    public:
    void fun(){
        cout<<"test fun"<<endl;
    }
};
class derived : public test{
    public: 
    static void fun(){
        cout<<"derived fun"<<endl;
    }
};
int main(){
    derived ob;
    ob.fun();
}