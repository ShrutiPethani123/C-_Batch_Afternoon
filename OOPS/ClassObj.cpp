// POPs - procedure oriented programming System (C , C++)
//   - Top to Bottom
// OOPs - Object orientd programming system (C++ , JAVA , Python)
// - Bottom to top

/*
class
object
Abstraction
Inheritance
Encapsulation
Polymorphism


class
    - it is a blueprint of object
    - it is a virtual entity

object
    - it is a Real life entity

*/
#include<iostream>
using namespace std;

class Car{

    public:
    int wheel = 4; // data member
    string color;

    void run() // member function / method 
    {
        cout<<"Running....."<<endl;
    }
    
    void displayDetails();

};

void Car::displayDetails()
{
    cout<<wheel<<" "<<color<<endl;
}

int main()
{
    // class name object_name
    Car bmw;
    cout<<"Wheels in bmw : "<<bmw.wheel<<endl;
    bmw.run();
    bmw.color="red";
    cout<<"Color of bmw is: "<<bmw.color<<endl;

    Car c2;
    cout<<"Wheels of c2 car: "<<c2.wheel<<endl;
    c2.run();
    c2.color="black";
    cout<<"Color of c2 car is: "<<c2.color<<endl;


}


/*

Make one class Name Student and properties like 

data member - name , age , id , address
member function - displayDetails()

*/