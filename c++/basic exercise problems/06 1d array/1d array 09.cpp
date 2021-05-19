#include <iostream>
using namespace std;

int main()
{
	//Fibonacci numbers in an array
    int n;
    int fib1 = 0;
    int fib2 = 1;

    cout << "Enter the size of the array: ";
    cin >> n;

    int fib[n];
    
    for(int i = 0; i < n; i++)
	{
        int result = fib1 + fib2;
        fib[i] = fib1;
        fib1 = fib2;
        fib2 = result;
    }
    for(int i = 0; i < n; i++)
	{
        cout << fib[i] << " ";
	}

    return 0;
}

