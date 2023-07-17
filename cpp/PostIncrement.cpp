#include<bits/stdc++.h>
using namespace std;
class prePost{
public:
    int a =10;
    friend prePost operator++(prePost &ob){      //pre
        cout<<"pre increment"<<endl;
        prePost obj;
        obj.a = ++ob.a;
        return obj;
    }
    friend prePost operator++(prePost &ob,int){   //post
        cout<<"post increment"<<endl;
        prePost obj;
        obj.a = ob.a++;
        return obj;
    }
};
int main(){
    prePost ob;
    ob++; ++ob;
}