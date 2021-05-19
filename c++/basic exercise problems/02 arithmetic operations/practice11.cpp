#include <iostream>
using namespace std;

int main()
{
    int number, lastDigit;
    cout << "Enter an integer number: ";
    cin >> number;

    lastDigit = number % 10;

    cout << "Last digit: " << lastDigit << endl;
}
