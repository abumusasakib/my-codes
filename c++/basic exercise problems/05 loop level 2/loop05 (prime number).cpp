#include <iostream>
using namespace std;

int main()
{
    int number, i;
	
    int isPrime = 1;

    cout << "Enter a number: ";
	cin >> number;

	if(number == 0 || number == 1)
    {
        isPrime = 0;
    }

    for(i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            isPrime = 0;
        }
    }

    if(isPrime == 1)
    {
        cout << "Prime" << endl;;
    }
    else
    {
        cout <<"Not prime" << endl;;
    }
}
