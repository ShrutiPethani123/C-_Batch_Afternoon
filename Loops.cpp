/*

There are 2 type of loops.

1. Entry control
    for
    while
2. Exit control
    do while


for(intialiazion; condition ; inc/dec)
{
    // body of the loop
}


intializtion
while(condition)
{
    // body of loop
    inc/dec
}


intializtion
do
{
    // body of loop
    inc/dec
}while(condition);

*/

#include<iostream>
using namespace std;

int main()
{

    // for(int i=1;i<=10;i++)
    // {
    //     // cout<<"Royal"<<endl;
    //     cout<<i<<endl;
    // }

    // int j=20;
    // while(j>=10)
    // {
    //     //cout<<"Royal"<<endl;
    //     cout<<j--<<" " ;
       
    // }

    // int k=1;
    // do{
        
    //    cout<<k<<" ";
    //    k+=2;
    //    // k=k+2

    // }while(k<=30);

    // int n=3;
    // int i=1;
    // while(i<11)
    // {
    //     cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    //     i++;
    // }

    // for(int i=21;i<=30;i=i+2)// i+=2
    // {
    //     cout<<i<<" ";
    // }

    int a = 12;
    int b= 15;
    int lcm;

    int max = a>b? a:b;

    // if(a>b)
    // {
    //     max=a;
    // }else{
    //     max=b;
    // }

    int i=max;
    while(1)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
        i=i+max;

    }
    // 15 30 45 60 ...

    cout<<" lcm is: "<<lcm;
}

/*

1. print 50 to 100 numbers using for and while loop and do while.
2. print reverse number from 30 to 20 using all loops.
3. print all even numbers between 1 to 30 using all loops.
4. print all odd numbers between 1 to 30 using all loops and without using if.
    1 3 5 7 ....
5. print multiplication table of user given number using all loops.
    3 * 1 = 3
    3 * 2 = 6
    .
    .
    .
    3 * 10 = 30

6. count digits of number( 2345126 --> 7 )
7. print sum of all digit ( 1234 - 10 )
8. print reverse of digit (1563 --> 3651 )
9. find gcd of two number.

    12  --> 1 2 3 4 6 12
    6 --> 1 2 3 6

    gcd - 6

    30  --> 1 2 3 5 6 10 15 30
    15 --> 1 3 5 15
    gcd --> 15

10. find lcm of two numbers.

    3   -->     3 6 9 12 15....
    4   -->     4 8 12 16 20 ....

    lcm = 12

    a * b = gcd * lcm

11. take one number from user and check number is prime or not ?

    3 -> 1 3 
    4 -> 1 2 4 

    3 5 7 11 13 17.....

12. check number is palindrom or not.

    121 , 1221 13431 5665 -> palindrom
    123 , 342 , 11113 , 456 -> not palindrom

*/