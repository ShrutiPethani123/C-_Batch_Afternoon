/*
   0 1 2
0- 1 2 3
1- 4 5 6 

a[0][0] = 1
a[2][3]=
a[1][2]=6

rows - 2
cols - 3

2*3
size - row * col
total number of elements = row * col

1 2 3 4 5 6
1 4 2 5 3 6

*/
#include<iostream>
using namespace std;

int main()
{
    int a[2][3]={1,2,3,4,5,6};

    cout<<"Arrray..."<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<a[i][j]<<" "; 
        }
        cout<<endl;

    }

    cout<<endl;

    int b[10][10];
    int r , c;
    cout<<"Enter how many rows ?";
    cin>>r;
    cout<<"Enter how many cols?";
    cin>>c;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter element: ";
            cin>>b[i][j];

        }
    }

    cout<<"User define Array...."<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {

            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    


}

/*

1. Take two array from user and print sum of two array.

1 2 3   1 4 5
2 3 1   1 4 7
4 2 3   2 3 7

A       B

c= A + B

2 6 8
3 7 8
6 5 10

2. Take one array from user and check element is present in array or not.

1 2 3 
4 5 8 
7 9 6

ele - 4 -> present
elem - 85 -> not present

*/