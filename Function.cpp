/*
function -> block of code

decelaration/defination
calling


syntax:

return_type  function_name (argument)
{
    // body of function
}

void add(int x,int y)
{

}

Return type:

int
float
char
string
double

no return type -> void

There are 4 types of function:

1. with Return type with argument
2. with return type without argument
3. without return type without argument
4. without return type with argument

1.

int add(int c)
{
    return c+2;
}

2.

float sub()
{
    return 0;
}

3.

void display()
{

}

4.

void display(int x)
{

}

calling 

display(4)

*/

#include<iostream>
using namespace std;

void display()
{
    cout<<"Royal Technosoft..."<<endl;   
}

int add(int x,int y)
{
    return x+y;
}

int main()
{
    display();
    display();
    display();
    

    cout<<add(2,3)<<endl;
    int ans = add(4,53);
    cout<<"ans is: "<<ans<<endl;

    return 0;
}