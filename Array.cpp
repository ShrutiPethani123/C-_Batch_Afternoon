/*

1 4 5 7 6
0 1 2 3 4

-> Array is a Data structure.
-> All elements have of array have same data type.
-> All elements store at continuos memory location
-> index start with 0
-> index end with size-1

a - 4 7 9 65 12 47 

a[0] - 4
a[2] - 9
a[5] - 47
a[6]



*/

#include<iostream>
using namespace std;
#define SIZE 5

int main()
{
    // int a[5]={14,2,34,4,3}; // declaration of array

    // for(int i=0;i<10;i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    float a[SIZE];

    for(int i=0;i<SIZE;i++)
    {
        cout<<"Enter data: ";
        cin>>a[i];
    }

    cout<<endl<<"Array is...."<<endl;
    for(int i=0;i<SIZE;i++)
    {
        cout<<a[i]<<" ";
    }

    int count=0;
    cout<<endl<<"Negative numbers: ";
    for(int i=0;i<SIZE;i++)
    {
        if(a[i]<0)
        {
            cout<<a[i]<<" ";
            count++;
        }
    }

    cout<<endl<<" Total Negative numbers: "<<count<<endl;




    return 0;
}

/*

1. count number of negative number in array.
2. take one array from user and count all even and odd numbers.
3. find maximum and minimum element from array.
4. search element from array.
  4 5 8 7 96 4

  3 - not Found
  8 - present at location 3(index+1)
5. Reverese of the array.


*/