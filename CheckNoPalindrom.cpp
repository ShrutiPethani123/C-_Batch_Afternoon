/*
palindrom - 121  1221   13431  156651
not palindrom - 1554 8962 14421 

*/
#include<iostream>
using namespace std;

int main()
{
    int n,rem,rev=0;
    cout<<"Enter a no: ";
    cin>>n;
    int temp=n;

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10 + rem;
        n=n/10;
    }

    if(temp==rev)
    {
        cout<<"palindrom!!";
    }else{
        cout<<"Not palindrom";
    }


    return 0;
}