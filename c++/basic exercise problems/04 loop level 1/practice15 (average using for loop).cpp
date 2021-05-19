#include <iostream>
using namespace std;

int main()
{
    float sum = 0;

    for(int i = 1; i <= 10; i++)
    {
        float number;
        cout << "Give a number: ";
        cin >> number;
        sum = sum + number;
    }

    cout << "Average is " << sum / 10 << endl;

    return 0;
}
