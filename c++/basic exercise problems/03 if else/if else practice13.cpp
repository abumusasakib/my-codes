#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter the year: ";
    cin >> year;

    if(year % 4 == 0 && year % 100 != 0)        //divisible by 4 and not by 100
    {
        cout << "A leap year" << endl;
    }
    else if(year % 100 == 0 && year % 400 != 0) //divisible by 100 and not by 400
    {
        cout << "Not a leap year" << endl;
    }
    else if(year % 400 == 0)                 //divisible by 400
    {
        cout << "A leap year" << endl;
    }
    else
    {
        cout << "Not a leap year" << endl;
    }
}
