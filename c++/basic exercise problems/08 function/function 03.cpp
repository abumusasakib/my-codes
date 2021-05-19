#include <iostream>
using namespace std;

int factorialOfANumber(int number)
{
    int factorial = 1;

    for(int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}

int main()
{
    int n;

    cout << "Enter a positive number: ";
    cin >> n;

    cout << "Factorial of the number is: " << factorialOfANumber(n) << endl;
}