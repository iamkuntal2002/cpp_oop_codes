#include <iostream>
using namespace std;
class Test{
public:
    Test(){
        cout << "const: \n"; // 1
    }
    ~Test(){
        cout << "dest: \n"; // 2
    }
};
int main(){
    try{
        Test t;
        throw 10;
    }catch (int e){
        cout << "int caught" << e << endl; // 3
    }
}