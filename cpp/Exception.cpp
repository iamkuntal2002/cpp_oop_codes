#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 0;
    int c;
    try{
        if(b == 0){
            b =1;c = 0;
            throw "error";
        }
        c = a/b;
    }catch(const char *e){
        cout<<e<<endl;
    }
}