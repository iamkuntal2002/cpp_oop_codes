#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    int roll;
    float cgpa;
    char name[100];
public:
    void getData();
    void putData();
    void fun(Student &); // pass by reference, modifications will be reflected in main()
};
void Student::getData()
{
    cout << "\n Enter roll: ";
    cin >> roll;
    cout << "\n Enter cgpa: ";
    cin >> cgpa;
    cout << "\n Enter name: ";
    cin >> name;
}
void Student::putData()
{
    cout << "\n Roll=" << roll << " cgpa=" << cgpa << " name=" << name;
}
void Student::fun(Student &sob)
{
    cout << "\n Roll=" << sob.roll << " cgpa=" << sob.cgpa << " name=" << sob.name;
    sob.roll = 10;
}
int main()
{
    Student ob; // array of object
    ob.getData();
    ob.fun(ob);
    ob.putData(); // roll will be displayed as 10, bcz fun() was called through reference
}