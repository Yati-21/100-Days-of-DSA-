//3. Write a function to rotate an array to the left by k positions.

/*
Time complexity = O(n)
Space = O(k)
*/


#include <iostream>
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

    k = k%n;

    int temp[k];

    //store first k elements in temp array
    for(int i = 0;i<k;i++)
        temp[i]=arr[i];

    //rotate the remaining elements by k places
    for(int i = 0;i<k;i++)
    {
        arr[i] = arr[i+k];

    }

    //add the k elments stored in the first place back to the array
    for(int i = n-k, j=0; i<n, j<n;i++,j++)
    {
        arr[i]= temp[j];
    }

    for(int i =0 ; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}