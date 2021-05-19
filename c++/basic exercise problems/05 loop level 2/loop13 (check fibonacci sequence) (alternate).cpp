#include<iostream>
using namespace std;
int main()
{
    int n, first = 0, second = 1, next = 0;
    int i;
    
    cout<<"Enter Number:";
    cin>>n;
    
    for(i = 2; next <= n; i++)
    {
        next = first+second;
        first = second;
        second = next;

        if(next == second)
        {
            break;
        }
    }
    
    cout << "\b";
    
    if(next == second)
    {
        cout << i + 1 << "th term in Fibonacci sequence";
    }
    else
    {
        cout<<"Not in Fibonacci series";
    }
}
