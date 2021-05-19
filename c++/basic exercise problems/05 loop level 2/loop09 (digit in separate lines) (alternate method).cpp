#include <iostream>
using namespace std;

int main()
{
    int number, exponent = 0;

    cout << "Enter number: ";
    cin >> number;
	
	if(number == 0)
    {
        cout << number << endl;
    }

    int digitCounter = number;                 //counting number of digits and storing in exponent
    while(digitCounter != 0)
    {
        digitCounter = digitCounter / 10;
        exponent++;
    }

    exponent = exponent - 1;                   //storing 1 less than the number of digits

	int digits;

    while(number != 0)
    {
        int divisor = 1;

        for(int i = 0; i < exponent; i++)      //calculating 10^exponent and storing in divisor
        {
            divisor = divisor * 10;
        }

        digits = number / divisor;
        cout << digits << endl;
        number = number % divisor;
        exponent--;
    }
}
