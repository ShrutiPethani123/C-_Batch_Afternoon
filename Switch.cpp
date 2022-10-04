#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    switch(n)
    {
        case 1:
                  
        case 2:
                
        case 3:
                cout<<"Wednesday";
                break;
        case 4:
                cout<<"Thursday";
                break;
        case 5:
                cout<<"Friday";
                break;
        case 6:
                cout<<"Satuarday";
                break;
        case 7:
                cout<<"Sunday";
                break;
        default:
            cout<<"Invalid choice";
            break;
    }
}

/*

take month number from user and print days of that month
    1 - 31 days
    2 - 38/29 days
    3- 31 days
    4 - 30 days
    


*/