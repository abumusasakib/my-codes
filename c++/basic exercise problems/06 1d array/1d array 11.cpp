#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a decimal number (only integer numbers): ";
    cin >> n;

    int binaryDigitCount = n;
    int binaryDigit = 0;

    while(outputDigitCount > 0)
    {
        binaryDigitCount = binaryDigitCount / 2;
        binaryDigit++;
    }

    int binaryNumber[binaryDigit];

    for(int i = 0; i < binaryDigit; i++)
    {
        binaryNumber[i] = n % 2;
        n = n / 2;
    }

    cout << "Binary number is: ";

    for(int i = binaryDigit - 1; i >= 0; i--)
    {
        cout << binaryNumber[i] << "";
    }

    return 0;
}