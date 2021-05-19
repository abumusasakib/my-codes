#include <iostream>

using namespace std;

int main()
{
    float n;

    cout << "Enter a decimal number: ";
    cin >> n;

    int integerPart = n;
    float decimalPart = n - integerPart;

    int inputIntegerPart = integerPart;

    int binaryDigitCount = integerPart;
    int binaryDigit = 0;

    while(binaryDigitCount > 0)
    {
        binaryDigitCount = binaryDigitCount / 2;
        binaryDigit++;
    }

    cout << "Binary number is: ";

    int binaryIntegerPart[binaryDigit];

    for(int i = 0; i < binaryDigit; i++)
    {
        binaryIntegerPart[i] = integerPart % 2;
        integerPart = integerPart / 2;
    }

    int decimalPrecision = 5;

    if(integerPart == decimalPart)
    {
        decimalPrecision = 0;
    }

    int binaryDecimalPart[decimalPrecision];

    for(int i = 0; i < decimalPrecision; i++)
    {
        decimalPart = decimalPart * 2;
        binaryDecimalPart[i] = int(decimalPart);
        decimalPart = decimalPart - int(decimalPart);
    }

    for(int i = binaryDigit - 1; i >= 0; i--)
    {
        cout << binaryIntegerPart[i] << "";
    }

    if(inputIntegerPart == n)
    {
        cout << "";
    }

    else if(inputIntegerPart == 0)
    {
        cout << "0.";
    }

    else
    {
        cout << ".";
    }

    for(int i = 0; i < decimalPrecision; i++)
    {
        cout << binaryDecimalPart[i];
    }

    return 0;
}
