#include <iostream>
using namespace std;

int main()
{
    float height, inCm, inInch, inFeet;

    cout << "Enter the height in meters: ";
    cin >> height;

    inCm = height * 100;

    inInch = inCm / 2.54;
	
    inFeet = inInch / 12;
	
    cout << "The length in feet is: " << inFeet << endl;

    return 0;
}
