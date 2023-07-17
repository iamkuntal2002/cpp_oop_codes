#include<iostream>
using namespace std;
class sample{
    int a = 10;
public:
    sample(int a = 0){
        this->a = a;
        cout<<"const called"<<endl;
    }
    operator int(){
        return a;
    }
};
int main(){
    sample ob = 2;  //BDT to UDT
    int a = ob;     //UDT to BDT
    cout<<a<<endl;  //2
}