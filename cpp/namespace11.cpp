#include<iostream>
#include<string.h>
using namespace std;
namespace ns1
{	
	int p,q;
}
namespace ns2
{
	int p,q;
}
int main()
{
	using namespace ns1;
	p=10;
	q=20;	
	using ns2::p;
	using ns2::q;	
	p=4;         //using declaration will override the using directive imported entities 
	q=5;	
	cout<<"p="<<p<<"q="<<q<<endl;	
	cout<<"p="<<p<<"q="<<q<<endl;	
	cout<<"ns1::p="<<ns1::p<<"ns1::q="<<ns1::q;
}