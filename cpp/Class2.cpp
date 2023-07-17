#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    int roll;
    float cgpa;
    char name[100];
public:
    void getData()
    {
        cout << "\n Enter roll: ";
        cin >> roll;
        cout << "\n Enter cgpa: ";
        cin >> cgpa;
        cout << "\n Enter name: ";
        cin >> name;
    }
    void putData()
    {
        cout << "\n Roll=" << roll << " cgpa=" << cgpa << " name=" << name;
    }
};
int main()
{
    Student *s[3]; // array of object pointer creation
    Student ob[3]; // array of object
    for (int i = 0; i < 3; i++)
        s[i] = &ob[i];
    for (int i = 0; i < 3; i++)
        s[i]->getData();
    for (int i = 0; i < 3; i++)
        s[i]->putData();
}