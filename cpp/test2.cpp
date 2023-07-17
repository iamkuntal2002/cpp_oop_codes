#include<iostream>
using namespace std;

class Sample
{
	public:	
	static int i;	
	Sample()                                        //def-constructor 
	{
		cout<<"def_constructor called \n";
				
	    i++;
    }
   
   static void display()
	{
		cout<<"i="<<i<<endl; 
	}
	
};

int Sample::i=1;   //initialize the static member variable, [if other than 0]

int main()
{
	Sample s[10];
	s[1].display(); 	
	s[2].display();
	Sample::display();
	
	cout<<"value of i="<<Sample::i<<endl;
	
	Sample s3;
	s3.display();
}