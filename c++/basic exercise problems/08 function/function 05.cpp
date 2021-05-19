#include <iostream>
using namespace std;

int sumOfDigits(int number)
{
    int sum = 0;
	
	int digit;

    while(number > 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    return sum;
}

int main()
{
	int n;

    cout << "Enter a positive number: ";
    cin >> n;

    cout << "Sum of the digits: " << sumOfDigits(n) << endl;

    return 0;
}
