#include <iostream>

using namespace std;

int main()
{
    int number;
	
    cout << "Enter a number: " << endl;
    cin >> number;

    if(number % 2 == 0) //checking if divisible by 2
    {
        cout << "The number is even" << endl;
    }
    else
    {
        cout << "The number is odd" << endl;
    }
}
