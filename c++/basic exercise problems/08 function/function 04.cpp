#include <iostream>
using namespace std;

int numberOfDigits(int number)
{
    int counter = 0;

    while(number != 0)
    {
        number = number / 10;
        counter++;
    }

    return counter;
}

int main()
{
    int n;

    cout << "Enter a positive number: ";
    cin >> n;

    cout << "Number of digits: " << numberOfDigits(n) << endl;
}