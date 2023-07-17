#include<iostream>
using namespace std;
int& fun(int &a){
        return a;
}
int main(){
    int a = 10;
    fun(a) = 30;
    cout<<a;    //30
}