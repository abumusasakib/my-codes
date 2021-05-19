#include <iostream>
using namespace std;

int reversedNumber(int number)
{
    int reversedNumber = 0;
	
	int digit;

    while(number > 0)
    {
        digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number = number / 10;
    }

    return reversedNumber;
}

int main()
{
	int n;

    cout << "Enter a positive number: ";
    cin >> n;

    cout << "The reverse number is: " << reversedNumber(n) << endl;

    return 0;
}