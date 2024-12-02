//2. Write a program to find the factorial of a number using a loop.
#include<iostream>
using namespace std;


int factorialLoop(int x)
{
    int fact = 1;

    if(x==0 ||x==1)
    {
        return fact;
    }
    else
    {
        for(int i =2;i<=x;i++)
        {
            fact *= i;
        }
    }

    return fact;
}



int factRecursion(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return n * factRecursion(n-1);
}

int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    cout<<x<<"! "<<"is: "<<factorialLoop(x);
    cout<<endl;
    cout<<x<<"! "<<"is: "<<factRecursion(x);
    
    return 0;
}