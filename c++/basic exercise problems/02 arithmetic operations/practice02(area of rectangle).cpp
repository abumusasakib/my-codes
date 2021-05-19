#include <iostream>
using namespace std;

int main()
{
    float area, perimeter, length, width;

    cout << "Enter length: " << endl;
    cin >> length;

    cout << "Enter width: " << endl;
    cin >> width;

    area = length * width;
    cout << "The area of the rectangle is: " << area << endl;

    perimeter = 2 * (length + width);
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;
}
