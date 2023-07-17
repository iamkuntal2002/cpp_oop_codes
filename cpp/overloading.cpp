#include<bits/stdc++.h>
using namespace std;
class Overloading{
public:
    int add(int a , int b){
        cout<<"version int int ";
        return a+b;
    }
    int add(int a,float b){
        cout<<"version int float ";
        return a+b;
    }
    int add(float a, int b){
        cout<<"version float int ";
        return a+b;
    }
    int add(float a, float b){
        cout<<"version float float ";
        return a+b;
    }
};
int main(){
    Overloading ob;
    cout<<ob.add(1,2)<<endl;       //version int int 3
    cout<<ob.add(2,3.3F)<<endl;     //version int float 5
    cout<<ob.add(4.4f,5)<<endl;     //version float int 9
    cout<<ob.add(6.6f,7.7f)<<endl;   //version float float 14
}


