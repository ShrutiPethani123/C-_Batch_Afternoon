#include <iostream>
using namespace std;

class Student
{

public:

    int id;
    string name;
    int age;

    void displayDetails()
    {
        cout << id << " " << name << " " << age << endl;
    }
};

int main()
{

    Student s1;
    s1.id=4;
    s1.name="shruti";
    s1.age=22;

    Student s2;
    cout<<"Enter id:";
    cin>>s2.id;
    cout<<"Enter age: ";
    cin>>s2.age;
    cout<<"Enter name: ";
    cin>>s2.name;

    s1.displayDetails();
    s2.displayDetails();

}