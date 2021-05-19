#include <iostream>
using namespace std;

int main()
{
    //finding armstrong number
	int number, sum = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    int originalNumber = number;
	int remainder;

    while(number > 0)
    {
        remainder = number % 10;
        sum = sum + (remainder * remainder * remainder);
        number = number / 10;
    }

    if(sum == originalNumber)
    {
        cout << "Armstrong number." << endl;
    }
    else
    {
        cout << "Not an Armstrong number." << endl;
    }

    return 0;
}
