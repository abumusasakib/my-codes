#include <iostream>
using namespace std;

bool checkIfNumberIsPerfect(int number)
{
    int sum = 0;
	
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
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
	int num;

    cout << "Enter a number: ";
	cin >> num;

    if(checkIfNumberIsPerfect(num) == true)
    {
        cout << "The number is perfect";
    }

    else
    {
        cout << "The number is not perfect";
    }

    return 0;
}