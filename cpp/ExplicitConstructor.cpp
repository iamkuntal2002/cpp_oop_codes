#include<iostream>
using namespace std;
class Explicit{
    int a ;
public:
    explicit Explicit(int a){
        cout<<"constructor called"<<endl;
        this->a = a;
    }
};
int main(){
    // Explicit ob = 10;   //error
    Explicit ob2(12);   //okkk
}