#include<iostream>
using namespace std;

class Y
{
int y;

public:
Y(int b=0)
{
y=b;	
}	

void display()
{
cout<<"y="<<y<<endl; 
}
};

class X
{
int x;

public:
X(int a=0)
{
x=a;	
}	
void display()
{
cout<<"x="<<x<<endl; 
}
operator Y()
{
	return Y(x);
}
};



int main()
{
	Y oby(100);
	X obx(300);
	
	oby.display();
	obx.display();
	
	oby=obx; 
	oby.display();
}