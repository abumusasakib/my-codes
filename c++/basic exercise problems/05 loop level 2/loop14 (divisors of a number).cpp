#include <iostream>
using namespace std;

int main()
{
	//finding divisors of a number
	int number;

	cout << "Enter the number: ";
	cin >> number;

	cout << "Divisors of " << number << " are" << endl;

	for(int i = 1; i <= number; i++)
	{
		if(n % i == 0)
        {
            cout << i << " ";
        }
	}

	return 0;
}
