#include <iostream>
using namespace std;
inline void print(int a, char c = '+')
{
    for (int i = 1; i <= a; i++)
        cout << c << " ";

    cout << endl;
}
int main()
{
    print(10);
    print(5, '*');
    print('+');
}