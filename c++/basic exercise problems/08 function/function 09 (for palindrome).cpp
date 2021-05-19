#include <iostream>
using namespace std;

bool checkIfNumberIsPalindrome(int number)
{
    int reversedNumber = 0, originalNumber = number;
	int lastDigit;

    while(number > 0)
    {
        lastDigit = number % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        number = number / 10;
    }

    if(originalNumber == reversedNumber)
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

    if(checkIfNumberIsPalindrome(num) == true)
    {
        cout << "The number is palindrome";
    }

    else
    {
        cout << "The number is not palindrome";
    }

    return 0;
}
