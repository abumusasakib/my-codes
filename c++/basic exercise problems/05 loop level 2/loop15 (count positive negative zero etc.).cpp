#include <iostream>
using namespace std;

int main()
{
    //counting positive negative zero etc.
	int numberOfInputs, input;
    int positiveNumber = 0, negativeNumber = 0, zeroes = 0;
    int evenNumber = 0, oddNumber = 0;

    cout << "Number of inputs: ";
    cin >> numberOfInputs;

    for(int i = 0; i < numberOfInputs; i++)
    {
        cout << "Enter the inputs: ";
		cin >> input;

        if(input > 0)
        {
            positiveNumber++;
        }
        else if(input < 0)
        {
            negativeNumber++;
        }
        else if (input == 0)
        {
            zeroes++;
        }

        if(input % 2 == 0)
        {
            evenNumber++;
        }
        else
        {
            oddNumber++;
        }
    }

    cout << endl;
    cout << "Positive: " << positiveNumber << endl;
    cout << "Negative: " << negativeNumber << endl;
    cout << "Zero: " << zeroes << endl;
    cout << "Odd: " << oddNumber << endl;
    cout << "Even: " << evenNumber << endl;
}
