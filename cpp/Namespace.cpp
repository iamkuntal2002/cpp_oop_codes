#include<iostream>
using namespace std;
namespace ns1{
    int a = 1;
    void fun(){
        cout<<"this is ns1"<<endl;
    }
}
namespace ns1{
    void fun2(){
        cout<<"this is fun2"<<endl;
    }
}
int main(){
   using namespace ns1;
   cout<<a<<endl;
   fun();
   fun2();
}