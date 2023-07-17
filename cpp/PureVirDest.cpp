#include<iostream>
using namespace std;
class PureVirDest{
public:
    PureVirDest(){
        cout<<"this is constructor"<<endl;
    }
    virtual ~PureVirDest() = 0; //pure virtual destructor
};
PureVirDest :: ~PureVirDest{
    cout<<"this is destructor"<<endl;
}
int main(){
    PureVirDest ob; //error, cannot instantiated
}
