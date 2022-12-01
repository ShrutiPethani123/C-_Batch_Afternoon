/*
constructor:

-> it is a special function
-> it does not have any return type.
-> constructor name is same as class name.
-> use: intialize the value of instance Variable
-> whenever object are created at a time by default constructor called.

-> There are 3 types of Constructor:

1. Default constructor
2. Perametrized constructor
3. Copy constructor

*/



#include<iostream>
using namespace std;

class Test{

    private:

    int a; // instance variable
    int b;

    public:

    Test() // default constructor
    {
        cout<<"Default constructor.."<<endl;
        a=8;
    }

    Test(int x) // perametrized constructor
    {
        cout<<"Perametrized constructor.."<<endl;
        a=x;

    }

    Test(int x,int y)
    {
        a=x;
        b=y;

    }

    void display()
    {
        cout<<a<<endl;
    }

    void display2()
    {
        cout<<a<<" "<<b<<endl;
    }


};

int main()
{
    Test obj;
    obj.display();

    Test obj2(100);
    obj2.display();
    
    Test obj3;
    obj3.display();

    Test obj4(80,90);
    obj4.display2();


}

/*

Home Work:

Make one class for Employee and Make two method getData and displayData

getData- take data from user
displayData - display all the data


data:

eid
name
designation
address
salary

Make 3 employee object

*/