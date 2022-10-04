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

    int n=3;
    int i=1;
    while(i<11)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }
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

*/