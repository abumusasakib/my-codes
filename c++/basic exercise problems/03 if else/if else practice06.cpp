#include <iostream>
using namespace std;

int main()
{
    int number;
	
    cout << "Enter a number: " << endl;
    cin >> number;

    if(number > 50 && number < 100) //checking if greater then 50 and less than 100
    {
        if(number % 13 == 0 || number % 9 == 0) //checking if divisible by 13 or 9
		{
			cout << "Yes" << endl;
		}
    }
    else
    {
        cout << "No" << endl;
    }
}
