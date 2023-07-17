#include<bits/stdc++.h>
using namespace std;
// void swap(int a,int b){      //copy of variables are passed
//     int temp =a;a = b;b = temp;
// }
// void swap(int &a,int &b){     // call by reference
    // int temp =a;a = b;b = temp;
// }
void swap(int *a,int *b){     // call by address
    int temp =*a;*a = *b;*b = temp;
}
int main()
{
    int a = 5 , b = 10;
    cout<<"a ="<<a<<" b ="<<b<<endl;    //a = 5 , b = 10
    swap(&a,&b);
    cout<<"a ="<<a<<" b ="<<b<<endl;    //a = 10 , b = 5
}