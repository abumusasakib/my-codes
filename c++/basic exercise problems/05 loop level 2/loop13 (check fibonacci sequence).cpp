#include <iostream>
using namespace std;

int main()
{
    //checking number in fibonacci sequence
	int sumOfTerms = 0;
    int number, i = 2;

    cout << "Enter a number: ";
    cin >> number;

    int fib1 = 0;
    int fib2 = 1;
    sumOfTerms = fib1 + fib2;

    while(sumOfTerms <= number)
    {
        fib1 = fib2;
        fib2 = sumOfTerms;
        sumOfTerms = fib1 + fib2;
        i++;
    }

    if(fib2 == number)
    {
        cout << i << "th term of the Fibonacci sequence.";
    }
    else
    {
        cout << "Does not exist in Fibonacci sequence.";
    }
}

