#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if((number % 5 == 0) || (number % 7 == 0)) //checking if divisible by 5 or 7
    {
        cout << "Divisible by 5 or 7" << endl;
    }
    else
    {
        cout << "Not divisible by 5 or 7" << endl;
    }
}
