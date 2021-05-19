#include <iostream>
using namespace std;

int main()
{
    int number, reversedNumber = 0;

    cout << "Enter three digit positive integer number: ";
    cin >> number;
	
	int remainder;

    while(number > 0)
    {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }

    cout << "Reversed number: " << reversedNumber << endl;
}
