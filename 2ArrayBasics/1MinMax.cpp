//1. Write a program to find the largest and smallest elements in an array.
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int min = INT_MAX, max= INT_MIN;
    int arr[10];
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i = 0;i<n;i++)
    {
        if(arr[i]>max )
        {
            max = arr[i];
        }
        if( arr[i]<min)
        {
            min = arr[i];
        }
    }

    cout<<"Max: "<<max<<endl;
    cout<<"min: "<<min;
    return 0;
}