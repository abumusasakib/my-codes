#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, D, RealPart,ImaginaryPart;

    cout << "Enter the coefficients of the quadratic equation: " << endl;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    D = (b * b) - (4 * a * c); //discriminant

    if(D > 0)
    {
		float x1, x2;
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        cout << "Roots are real and unequal" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if(D == 0)
    {
        x1 = -b / (2 * a);

        cout << "Roots are real and equal" << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }
    else
    {
        RealPart = -b / (2 * a);
        ImaginaryPart = (sqrt(-D))/ (2 * a);

        cout << "Roots are complex and unequal" << endl;
        cout << "x1 = " << RealPart << " + " << ImaginaryPart << "i" << endl;
        cout << "x2 = " << RealPart << " - " << ImaginaryPart << "i" << endl;
    }
}
