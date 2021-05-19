#include <iostream>
using namespace std;

int main()
{
    float number;

    cout << "Enter number: ";
    cin >> number;

    int integerPart = (int) number;

    if(integerPart == number)
    {
        cout << "Integer" << endl;
    }
    else
    {
        cout << "Floating-point number" << endl;
    }
}
