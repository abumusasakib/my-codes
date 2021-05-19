#include <iostream>
using namespace std;

int main()
{
    //separating integer and decimal part from number
	float number;

    cout << "Enter a decimal number" << endl;
    cin >> number;

    int integerPart = int(number);
	float decimalPart = number - int(number);

    cout << "Integer part: " << integerPart << endl;
    cout << "Decimal part: " << decimalPart << endl;

    return 0;
}
