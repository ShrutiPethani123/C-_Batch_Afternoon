#include<iostream>
using namespace std;

int check_prime(int x)
{
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            return 1;
        }

    }
    return 0;

}

int main()
{
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    int ans=check_prime(n);
    if(ans==0)
    {
        cout<<"Prime no"<<endl;
    }else{
        cout<<"Not prime"<<endl;
    }

}