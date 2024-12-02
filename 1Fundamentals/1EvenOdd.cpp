//1. Write a program to check if a number is even or odd.
#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    
    // if(x%2 == 0)
    // {
    //     cout<<x<<" is even";
    // }
    // else
    // {
    //     cout<<x<<" is odd";
    // }

    (x%2 ==0)? cout<<"even":cout<<"odd";

    return 0;
}