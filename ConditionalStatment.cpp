/*

if else

1. simple if
2. else if
3. nested if
4. else if ladder

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    if(n>0)
    {
        if(n>=10)
        {
            cout<<n<<" is greater than 10"<<endl;
        }else{
            cout<<n <<" is between 1 to 9"<<endl;
        }
        
    }else if(n==0)
    {
        cout<<n <<" is zero"<<endl;
    }
    else{
        cout<< n <<" is negative"<<endl;
    }

    cout<<"Thank you!!"<<endl;


    return 0;
}

/*


1. Find maximum number between two numbers
2. Find maximum number between three numbers
3. check number is even or odd?
4. check alphabet is vowel or consonant ? (capital)
5. check character is alphabet , number or special character ?
6. Enter cost price and selling price from user and check profit or loss ? 
7. Take input from user in numbers and print weekdays.(1- monday , 2- tuesday ..... 7- sunday)
8. write a program to no is divisible by 3 and 11 or not ?
9. Take input from user in numbers in month and print no of days that month. (1 - 31 days , 2....)

*/