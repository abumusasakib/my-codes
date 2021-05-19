#include <iostream>
using namespace std;

int main()
{
// finding the largest and smallest numbers

// declaration of required variables
    float number1, number2, number3;

// Input
    cout << "Enter the first number (number1): ";
    cin >> number1;

    cout << "Enter the second number (number2): ";
    cin >> number2;

    cout << "Enter the third number (number3): ";
    cin >> number3;

// processing
    if(number1 > number2)
        {
            //number1 > number2
            if(number1 > number3)
            {
                //number1 > number2 and number1 > number3
                //number1 > number2 > number3
                if(number2>number3)
                {
                    //number1 > number2 and number1 > number3 and number2 > number3
                    //number1 > number2 > number3
                    cout << "Largest: " << number1 << endl;
                    cout << "Smallest: " << number3 << endl;
                }
                else
                {
                    //number1 > number2 and number1 > number3 and number3 > number2
                    cout << "Largest: " << number1 << endl;
                    cout << "Smallest: " << number2 << endl;
                }
            }
            else
            {
                //number1 > number2 and number3 > number1
                cout << "Largest: " << number3 << endl;
                cout << "Smallest: " << number2 << endl;
            }
        }
    else
    {
        //number2 > number1
        if(number2 > number3)
        {
            //number2 > number1 and number2 > number3
            if(number1>number3)
            {
                //number2 > number1 and number2 > number3 and number1 > number3
                cout << "Largest: " << number2 << endl;
                cout << "Smallest: " << number3 << endl;
            }
            else
            {
               //number2 > number1 and number2 > number3 and number3 > number1
                cout << "Largest: " << number2 << endl;
                cout << "Smallest: " << number1 << endl;
            }
        }
        else
        {
            // number2 > number1 and number3 > number2
            cout << "Largest: " << number3 << endl;
            cout << "Smallest: " << number1 << endl;
        }
    }

    return 0;
}
