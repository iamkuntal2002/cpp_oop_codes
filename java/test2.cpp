#include<bits/stdc++.h>
using namespace std;
class test{
private:
    test(){
        cout<<"this is test const "<<endl;
    }
};
class derived : public test{

};
int main(){
    // test ob;
    derived ob;
    
}