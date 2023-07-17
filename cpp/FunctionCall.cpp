#include<bits/stdc++.h>
using namespace std;
class Function{
public:
    int a;
    Function(int a = 0){
        this->a = a;
    }
    friend Function operator()(Function &obj, int b){
        Function ob;
        ob.a = b;
        return ob;
    }
};
int main(){
    Function ob(5);
    Function ob2;
    ob2 = ob(10);
    cout<<ob2.a;    //10
}