//3. Write a function to rotate an array to the left by k positions.
#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int n;
    cin>>n;
    
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;
    

    int temp;

    for(int i = 0;i<k%n;i++)
    {
        temp = arr[0];
        for(int j = 0;j<n-1;j++)
        {
            arr[j]= arr[j+1];
        }
        arr[n-1]=temp;
    }


    cout<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}