//5. Implement a program to reverse a number (e.g., input: 123, output: 321).

#include<iostream>
using namespace std;


int reverse(int x)
{
    int n = x;
    int rev=0;
    int d;
    
    while(n!=0)
    {
        d = n%10;
        n = n/10;
        rev= rev*10+d;
    }
    return rev;

}

int main()
{
    int x;
    cin>>x;

    cout<<reverse(x);
    return 0;
}