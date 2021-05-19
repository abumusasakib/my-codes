#include <iostream>
using namespace std;

int main()
{
    float x;
	cout << "Enter the base: ";
    cin >> x;

    int y;
	cout << "Enter the exponent (power): ";
    cin >> y;

    float result = 1;

    for(int i = 0; i < y; i++)
    {
        result = result * x;
    }

    cout << result << endl;
}
