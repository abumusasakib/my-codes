#include <iostream>

using namespace std;

float volumeOfASphere(float radius)
{
    float volume, pi = 3.1416;

    volume = 1.33333 * pi * radius * radius * radius;
    return volume;
}

int main()
{
    float r;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Volume of the sphere is " << volumeOfASphere(r) << endl;
}