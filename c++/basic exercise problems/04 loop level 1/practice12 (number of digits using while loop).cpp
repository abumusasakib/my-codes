#include <iostream>

using namespace std;

int main()
{
    //counting number of digits using while loop
	int digitCounter = 0;
    int number;
	
    cout << "Enter a number: " << endl;
    cin >> number;

    while(number != 0)
    {
        number = number / 10;
        digitCounter++;
    }

    cout << "Number of digits: " << digitCounter << endl;


    return 0;
}
