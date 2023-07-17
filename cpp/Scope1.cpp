#include <iostream>
using namespace std;
int a = 1;
int main()
{
    int a = 2;
    {
        int a = 3;
        cout << "a=" << a << endl;     // 3
        cout << "::a=" << ::a << endl; // 1
        {
            int a = 4;
            cout << "a=" << a << endl;     // 4
            cout << "::a=" << ::a << endl; // 1
        }
    }
    cout << "a=" << a << endl; // 2
    cout << "::a=" << ::a << endl; // 1
}