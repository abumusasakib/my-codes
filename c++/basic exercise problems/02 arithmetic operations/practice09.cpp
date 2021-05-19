#include <iostream>
using namespace std;

int main()
{
    //swapping two variables without using third variable
	int x, y;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;


    cout << "Before swapping:" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    x = x + y;
    y = x - y;
    x = x - y;

	cout << endl;

    cout << "After swapping:" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    return 0;
}
