#include<bits/stdc++.h>
using namespace std;
class IntputOutput{
    int a = 10;
public:
    IntputOutput(int a = 0){
        this->a = a;
    }
    friend istream& operator>>(istream &ob,IntputOutput &obj){
        ob>>obj.a;
        return ob;
    }
    friend ostream& operator<<(ostream &ob,IntputOutput &obj){
        ob<<obj.a;
        return ob;
    }
};
int main(){
    IntputOutput ob(20);
    cout<<"enter a number"<<endl;
    cin>>ob;
    cout<<ob;   //10;
}