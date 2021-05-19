#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if((number % 3 == 0) && (number % 5 == 0)) //checking if divisible by 3 and 5
    {
        cout << "Divisible by 3 and 5" << endl;
    }
    else
    {
        cout << "Not divisible by 3 and 5" << endl;
    }
}
