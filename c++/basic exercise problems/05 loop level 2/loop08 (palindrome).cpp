#include <iostream>
using namespace std;

int main()
{
    int number, reversedNumber = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    int originalNumber = number;
	int remainder;

    while(number > 0)
    {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }

    if(originalNumber == reversedNumber)
    {
        cout << "Symmetric" << endl;
    }
    else
    {
        cout << "Not symmetric" << endl;
    }
}

