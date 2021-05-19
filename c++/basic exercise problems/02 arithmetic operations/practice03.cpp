#include <iostream>
using namespace std;

int main()
{
    float area, height, base;

    cout << "Enter height: ";
    cin >> height;

    cout << "Enter base: ";
    cin >> base;

    area = 0.5 * base * height;
    cout << "The area of the triangle is: " << area << endl;
}

