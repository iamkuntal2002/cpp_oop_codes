#include <iostream>
using namespace std;
class sample1{
    int s1;
public:
    sample1(int s){
        this->s1 = s;
    }
    int get_s(){
        return s1;
    }
};
class sample2{
    int s2;
public:
    sample2(int d = 0){
        this->s2 = d;
    }
    sample2(sample1 sob){
        s2 = sob.get_s();
    }
    void display(){
        cout << "s2 = " << s2 << endl;
    }
};
int main(){
    sample1 ob1(5);
    sample2 ob2;
    ob2 = ob1;  //UDT to UDT
    ob2.display();  
}