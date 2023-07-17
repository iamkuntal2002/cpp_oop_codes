#include<iostream>
using namespace std;
void fun(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 56;
    int b = 23;
    fun(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;
    return 0;
}