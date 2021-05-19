#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << "Enter the value of x: " << endl;
    cin >> x;

    cout << "Enter the value of y: " << endl;
    cin >> y;


    cout << "Before swapping:" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    z = x;
    x = y;
    y = z;

	cout << endl;
	
    cout << "After swapping:" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    return 0;
}
