// - single line comment
/*
    - multiline comment
*/

/*

types of operators:

1. Arithmetic  -->  + - * / %
2. relational --> < > <= >= == !=
3. logical --> && || !
4. assignment --> +=  -= *=  /=  %=  = (shorthand notation)
5. bitwise --> & | ^ << >>
6. inc/dec  --> ++ --

true --> 1
false --> 0

&&

A   B   A&&B

F   F   F
F   T   F
T   F   F
T   T   T

||

A   B   A||B

F   F   F
F   T   T
T   F   T
T   T   T

!

A   !A

T   F
F   T

^

A   B   A^B

F   F   F
F   T   T
T   F   T
T   T   F


// Binary to decimal conversion

Binary --> 2 (0,1)
decimal --> 10(0 to 9)

1010 --> 

    1*2^3   +  0*2^2  + 1*2^1   + 0*2^0      = 8 + 0 + 2 + 0 = 10

    128    64    32    16      8    4    2    1

    1010 = 10
    111 = 7
    1100 = 12
    0011 = 3
    1001 = 9
    000000001 0100 = 20
    0010 1010 = 42
    1111 0000 = 240
    1010 1100 = 172
    00 1100=12
    11 1100=60

// decimal to Binary conversion

12 --> 0000 1100
23 --> 0001 0111
10 --> 0000 1010
80 --> 0101 0000
115 -->0111 0011
15 -->
210 -->
365 --> 
25 --> 
120 --> 




*/


#include<iostream>
using namespace std;

int main()
{
    // arithmetic operator
    // int a,b;
    // cout<<"Enter two numbers: ";
    // // cin>>a>>b;
    // cin>>a;
    // cin>>b;
    // cout<<"Addition of two number is: "<<a+b<<endl;
    // cout<<"Substraction of two number is: "<<a-b<<endl;
    // cout<<"Multiplication of two number is: "<<a*b<<endl;
    // cout<<"Division of two number is: "<<a/b<<endl;
    // cout<<"reminer of two number is: "<<a%b<<endl;

    // Relational Operator
    // int a=45;
    // int b=30;
    // cout<<(a>b)<<endl;
    // cout<<(a<b)<<endl;
    // cout<<(a>=b)<<endl;
    // cout<<(a==b)<<endl;
    // cout<<(a!=b)<<endl;

    // Logical Operator
    // int a=24;
    // int b=34;
    // int c=23;

    // cout<<(a>b && b<c)<<endl;//F && F= F --> 0
    // cout<<(a>b && c<b)<<endl;//F && T --> F 
    // cout<<(a<b && c<b)<<endl; //
    // cout<<(a>b || b<c)<<endl;//F || F= F 
    // cout<<!(a>b)<<endl;

    //assignment operator

    // int x=45;
    // // x=x+2;
    // // x+=2;
    // // x=x*2;
    // x*=2;
    // cout<<x<<endl;

    // Bitwise Operator

    // int d= 34; //  0010 0010
    // int f = 24; // 0001 1000
    //             // 0011 1010 --> 58
    //             // 0000 0000 --> 0
    //             // 0011 1010 --> 58

    // int d=23;
    // int f=15;
            
    // cout<<(d&f)<<endl;
    // cout<<(d|f)<<endl;
    // cout<<(d^f)<<endl;
    // cout<<(d<<1)<<endl; // 0100 0100 --> 68
    // cout<<(d<<2)<<endl; // 1000 1000 --> 136
    // cout<<(d>>1)<<endl; // 0001 0001 --> 17
    // cout<<(d>>2)<<endl; // 0000 1000 --> 8

    
    // int x=4;
    // cout<<x++<<endl; // 4
    // cout<<x<<endl; // 5
    // cout<<++x<<endl; // 6
    // cout<<x<<endl;//6

    int y=5;
    // int x = y++ + y++; // 5(6) + 6(7) =5+6 = 11
    // int x= y++ + ++y; //5(6)+7(7) = 5+7=12
    // int x = y++ + y++ + ++y + y++ ; 
    // int x = (++y) + (y++); // 6(6) + 7(7)   = 6+7-7+8 = 15
    int x= ++y + ++y ;// 6(6) + 7(7)
    // int x= y++ + y++ + y++ + ++y; 
    cout<<x<<endl;
    cout<<y<<endl;

    






}