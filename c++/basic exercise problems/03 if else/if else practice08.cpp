#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if(((number > 10 && number < 40) && (number % 5 == 0)) || ((number > 60 && number < 90) && (number % 7 == 0)))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
