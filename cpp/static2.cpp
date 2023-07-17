#include<iostream>
using namespace std;
// class Sample
// {
// 	public: 
// 	static int s ;	
// 	void get(){
// 		s++;
// 	}	 
// 	void print(){       
// 		cout<<"s="<<s<<endl; 
// 	}	
// };

// int Sample::s=5; 
// int main()
// {
//     Sample ob1,ob2,ob3;
//     ob1.get();
//     // ob2.print();    //the changes by ob1 also reflect for ob2 and ob3
//     cout<<Sample::s;
// }


class This{
    static int a;
    int b = 20;
    public:
    static void fun1(){
        cout<<"a = "<<a<<endl;      //ok
        // cout<<"a = "<<this->a<<endl;     //error
        // cout<<"b = "<<b<<endl;      //error
    }
    void fun2(){
        cout<<"a = "<<this->a<<endl;    //ok
        cout<<"b = "<<b<<endl;      //ok
    }    
};
int This::a = 10;
int main(){
    This ob;
    ob.fun1();
    ob.fun2();
}
