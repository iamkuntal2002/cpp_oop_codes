#include<iostream>
using namespace std;
struct StructInherit
{
    public:
    void fun(){
        cout<<"this is struct fun"<<endl;
    }
};
struct StructInherit2 : public StructInherit
{
    
};
int main(){
    StructInherit2 st;
    st.fun();
}

