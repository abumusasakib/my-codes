#include <iostream>
using namespace std;

int main()
{
    //finding perfect number
	int number, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

	int divisor;

    for(int i = 1; i < number; i++)
    {
        divisor = number % i;

        if(divisor == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == number)
    {
        cout << "Perfect";
    }
    else
    {
        cout << "Not perfect";
    }

    return 0;
}
