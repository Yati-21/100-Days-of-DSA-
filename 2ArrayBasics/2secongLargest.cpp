//2. Implement a program to find the second largest element in an array.
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int max = INT_MIN, second= INT_MIN;
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
            second = max;
            max = arr[i];

        }
        
    }

    cout<<"Max: "<<max<<endl;
    cout<<"Second max: "<<second;
    return 0;
}