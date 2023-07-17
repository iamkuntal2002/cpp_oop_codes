#include <stdio.h>
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int a, b;
    printf("\n Enter a and b:");
    scanf("%d%d", &a, &b);
    swap(&a, &b); // addresses are passed
    printf("a=%d b=%d", a, b);
}