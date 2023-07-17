#include <iostream>
using namespace std;
int main(){
    int a = 10, b = 0, c;
    try{
        if (b == 0)
            throw "np"; //throw a string 
        c = a / b;
        cout << "res=" << c << endl;
    }catch (const int e){  //didn't match to the thrown type
        cout << e << endl;
    }catch (...) {// generalized catch block
        cout << "division by 0 is illegal:" << endl;
    }
    // o/p:
    // division by 0 is illegal:
}