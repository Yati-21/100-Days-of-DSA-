//4. Create a program to count the number of occurrences of a given element in an array.

#include<iostream>
#include<unordered_map>
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
        
    // key will be of INT type 
    // and mapped VALUE will
    // be of int type
    unordered_map<int, int> umap;

    for(int i = 0;i<n;i++)
    {
        umap[arr[i]]++;
    }

    for(auto x:umap)
    {
        cout<<x.first<<": "<<x.second<<endl;
    }


    return 0;
}