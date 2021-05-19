#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: " << endl;
    cin >> number;

    if(number >= 35  && number < 75)   //checking if within [35,75) (including 35 and excluding 75)
    {
        if(number % 5 == 0 && number % 2 != 0)  //checking if divisible by 5 but not by 2
		{
			cout << "Yes" << endl;
		}
    }
    else
    {
        cout << "No" << endl;
    }
}
