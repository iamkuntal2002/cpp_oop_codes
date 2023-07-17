#include <iostream>
using namespace std;
class Complex
{
    float real, img;
public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        img = i;
    }
    Complex add(Complex&);
    friend Complex mult(Complex&, Complex&);
    void display()
    {
        cout << real << "+i" << img << endl;
    }
};
Complex Complex::add(Complex &c)
{
    Complex t;
    t.real = real + c.real;
    t.img = img + c.img;
    return t;
}
Complex mult(Complex &c1, Complex &c2)
{
    Complex t;
    t.real = c1.real * c2.real - c1.img * c2.img;
    t.img = c1.real * c2.img + c1.img * c2.real;
    return t;
}
int main()
{
    Complex c1(2, 3);
    Complex c2(4, 2);
    Complex c3;
    c3 = c1.add(c2);
    c3.display();
    c3 = mult(c1, c2);
    c3.display();
}