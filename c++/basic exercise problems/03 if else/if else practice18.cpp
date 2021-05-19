#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "1. Area of a circle" << endl;
    cout << "2. Area of a rectangle" << endl;
    cout << "3. Area of a triangle" << endl;
    cout << "4. Volume of a cylinder" << endl;
    cout << "5. Volume of a sphere" << endl;
    cout << "6. Volume of a cube\n" << endl;

    float r, area, volume;
    float pi = 3.1416;

    int option;
    cout << "Select an option (1-6): ";
    cin >> option;

    switch(option)
    {
    case 1:
        cout << "\n<< Area of a circle >>\n" << endl;

        cout << "Enter radius: ";
        cin >> r;

        area = pi * r * r;

        cout << "Area of the circle is " << area << endl;
        break;

    case 2:
        cout << "\n<< Area of a rectangle >>\n" << endl;

        float length, width;

        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;

        area = length * width;

        cout << "Area of the rectangle is " << area << endl;
        break;

    case 3:
        cout << "\n<< Area of a triangle >>\n" << endl;

        float a, b, c, s;

        cout << "Enter length of first side: ";
        cin >> a;

        cout << "Enter length of second side: ";
        cin >> b;

        cout << "Enter length of third side: ";
        cin >> c;

        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "Area of the triangle is " << area << endl;
        break;

    case 4:
        cout << "\n<< Volume of a cylinder >>\n" << endl;

        float h;

        cout << "Enter radius of base: ";
        cin >> r;

        cout << "Enter height: ";
        cin >> h;

        volume = pi * r * r * h;

        cout << "Volume of the cylinder is " << volume << endl;
        break;

    case 5:
        cout << "\n<< Volume of a sphere >>\n" << endl;

        cout << "Enter radius: ";
        cin >> r;

        volume = (4/3) * pi * r * r * r;

        cout << "Volume of the sphere is " << volume << endl;
        break;

    case 6:
        cout << "\n<< Volume of a cube >>\n" << endl;

        float side;

        cout << "Enter length of a side: ";
        cin >> side;

        volume = side * side * side;

        cout << "Volume of the cube is " << volume << endl;
        break;

    default: cout << "Invalid selection" << endl;
    }
}
