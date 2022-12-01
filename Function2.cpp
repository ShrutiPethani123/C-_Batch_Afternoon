#include <iostream>
using namespace std;

void add(int x, int y)
{
    cout << "Addition of " << x << " and " << y << " is " << x + y << endl;
}

int main()
{
    while (1)
    {

        int a, b;
        cout << "Enter two number: " << endl;
        cin >> a >> b;

        cout << "0-exit" << endl;
        cout << "1.Add" << endl;
        cout << "2.Sub" << endl;
        cout << "3.MUl" << endl;
        cout << "4.Div" << endl;
        int n;
        cout << "Enter your choice: " << endl;
        cin >> n;
        switch (n)
        {
        case 0:
            exit(0);
        case 1:
            add(a, b);
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }
}

/*

make one calulator
using user given choice

1. Add
2. Sub
3. Mul
4. div


-> Take one number from user and check number is prime or not using function( with return typeand with argument)


int check_prime(int n)
{
    
}
*/