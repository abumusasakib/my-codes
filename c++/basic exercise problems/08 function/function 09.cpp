#include <iostream>
using namespace std;

bool checkIfNumberIsPrime(int number)
{
    bool isPrime = true;

	if(number == 0 || number == 1)
    {
        isPrime = false;
    }

    for(int i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            isPrime = false;
        }
    }

    if(isPrime == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
	int num;

    cout << "Enter a number: ";
	cin >> num;

    if(checkIfNumberIsPrime(num) == true)
    {
        cout << "The number is prime";
    }

    else
    {
        cout << "The number is not prime";
    }

    return 0;
}
