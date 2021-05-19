#include <iostream>
using namespace std;

int main()
{
    float Celsius, Fahrenheit, Kelvin;

    cout << "Enter temperature in Fahrenheit: " << endl;
    cin >> Fahrenheit;

    Celsius = (5.0/9.0) * (Fahrenheit - 32);
    cout << "in Celsius is: " << Celsius << endl;

    Kelvin = Celsius + 273.15;
    cout << "in Kelvin is: " << Kelvin << endl;

    return 0;

}
