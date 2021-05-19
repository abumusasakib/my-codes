#include <iostream>
using namespace std;

int hcfOfTwoNumbers(int number1, int number2)
{
    int hcf;

    for(int i = 1; (i <= number1) && (i <= number2); i++)
    {
        if((number1 % i == 0) && (number2 % i == 0))
        {
            hcf = i;
        }
    }

    return hcf;
}

int main()
{
	int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "HCF of the two numbers is: " << hcfOfTwoNumbers(num1, num2) << endl;

    return 0;
}