#include <iostream>
using namespace std;

int main()
{
    //check if a triangle is right angled triangle
	float a, b, c;

    cout << "Enter length of sides: " << endl;
    cin >> a >> b >> c;

    if((a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b)|| (c * c) + (b * b) == (a * a))
    {
        cout << "Right triangle" << endl;
    }
    else
    {
        cout << "Not a right triangle" << endl;
    }
}
