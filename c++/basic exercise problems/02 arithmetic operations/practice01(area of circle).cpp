#include <iostream>
using namespace std;

int main()
{
    float radius, area, circumference;
    float pi = 3.1416;

    cout << "Enter radius: " << endl;
    cin >> radius;

    area = pi * (radius * radius);
    cout << "The area of circle is: " << area << endl;

    circumference = 2 * pi * radius;
    cout << "The circumference of circle is: " << circumference << endl;

    return 0;
}
