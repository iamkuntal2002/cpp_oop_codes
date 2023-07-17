#include<iostream>
using namespace std;
class PureVirtualDest{
public:
    PureVirtualDest(){
        cout<<"this is PVD1 constructor"<<endl;
    }
    virtual ~PureVirtualDest() = 0;
};
PureVirtualDest :: ~PureVirtualDest(){
    {     //virtual destructor
        cout<<"this is PVD1 destructor"<<endl;
    }
}
class PureVirtualDest2 : public PureVirtualDest{
public:
    PureVirtualDest2(){
        cout<<"this is PVD2 constructor"<<endl;
    }
    ~PureVirtualDest2(){
        cout<<"this is PVD2 destructor"<<endl;
    }
};
int main(){
    // PureVirtualDest *ob;
    // PureVirtualDest2 ob2;
    // ob = &ob2;
    // delete ob;
    // PureVirtualDest ob;

}
// this is PVD1 constructor
// this is PVD2 constructor
// this is PVD2 destructor
// this is PVD1 destructor


// this is PVD1 constructor
// this is PVD2 constructor
// this is PVD2 destructor
// this is PVD1 destructor
// this is PVD2 destructor
// this is PVD1 destructor