#include <iostream>
using namespace std;
class A
{
	int a;
public:
	A(int a = 0)
	{
		this->a = a;
	}
	friend A operator++(A &ob, int)
	{
		A temp;
		temp.a = ob.a++;
		return temp;
	}
	void display()
	{
		cout << "a=" << a << endl;
	}
};
int main()
{
	A ob1(5), ob2;
	ob2 = ob1++; // operator++(ob1,int);
	ob1.display();
	ob2.display();
}