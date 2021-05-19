#include <iostream>
using namespace std;

int main()
{
	//number of prime numbers in an array
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int inputArray[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter numbers in the array: ";
        cin >> inputArray[i];
    }

    int primeCounter = 0;

    for(int i = 0; i < n; i++)
    {
        int input = inputArray[i];
        bool isPrime = true;

        for(int j = 2; j < input; j++)
        {
            if(input % j == 0)
            {
                isPrime = false;
            }
        }

        if(isPrime == true)
        {
            primeCounter++;
        }
    }

    cout << "Number of prime numbers in the array: " << primeCounter << endl;
}
