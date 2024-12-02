//4. Write a program to check if a given number is prime.

#include<iostream>
using namespace std;

int main()
{

    int x;
    cin>>x;
    
    int i;

    if(x==0||x==1)
    {
        cout<<"neither prime nor composite";
        return 0;
    }
    for(i = 2 ; i<=x/2 ; i++)
    {
        if(x%i ==0)
        {
            cout<<"Not prime";
            break;
        }
    }
    if(i>x/2)
    {
        cout<<"Prime";
    }

    return 0;
}