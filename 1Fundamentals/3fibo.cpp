//3. Create a program to print the first n Fibonacci numbers.

#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;

    int first = 0;
    int second = 1;
    int third, sum = first+second;

    cout<<first<<" "<<second<<" ";

    for(int i = 0 ; i<x-2 ; i++)
    {
        third = first+second;
        cout<<third<<" ";

        first = second;
        second = third;
        
        sum +=third;
    }
    cout<<endl;
    cout<<"sum of first "<<x<<" numbers: "<<sum;

    return 0;
}