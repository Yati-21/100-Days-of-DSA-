//5. Solve the "find all elements that appear more than once in an array" problem.
#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    unordered_map<int,int> freq;
    for(int i =0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    bool found = false;
    cout<<"elements havnig freq>1"<<endl;
    for(auto x:freq)
    {
        if(x.second>1)
        {
            cout<<x.first<<" ";
            found = true;
        }
    }

    if (!found) {
        cout << "None"; // If no duplicates were found
    }
    
    return 0;
}