#include <iostream>
using namespace std;
class Source
{
    int s;
public:
    Source(int s)
    {
        this->s = s;
    }   
    friend class Dest;
};
class Dest
{
    int d;
public:
    Dest(int d = 0)
    {
        this->d = d;
    }
    Dest(Source sob)    //this is required when the destination is after source
    {
        d = sob.s; // Dest is a friend of Source class
    }    
    void display()
    {
        cout << "d=" << d << endl;
    }
};
class Source2
{
    int s;
public:
    Source2(int s)
    {
        this->s = s;
    }
    operator Dest() //this is required when the source is after destination
    {
        return Dest(s);
    }
    friend class Dest;
};
int main()
{
    Source s(5);
    Dest d;
    Source2 s2(2);
    d = s2; 
    d = s; // d(s);
    // s = d; // error
    d.display();
}