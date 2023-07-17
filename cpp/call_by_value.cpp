#include <stdio.h>
using namespace std;
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    int a = 2, b= 4;
    cou
    swap(a, b); // photocopies are passes
    printf("a=%d b=%d", a, b);
}