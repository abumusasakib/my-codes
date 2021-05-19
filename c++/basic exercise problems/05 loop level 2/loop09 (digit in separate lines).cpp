#include <iostream>
using namespace std;

int main()
{
    int number, reversedNumber = 0;

    cout << "Enter number: ";
    cin >> number;

    //reversing the number
	int remainder;
    while(number > 0)
    {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }

	int digit;

    do
    {
        digit = reversedNumber % 10;
        reversedNumber = reversedNumber / 10;
        cout << digit << endl;
    }
    while (reversedNumber > 0);
}

