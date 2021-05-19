#include <iostream>
using namespace std;

int main()
{
    int num1, num2, term;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if(num1 <= num2)
    {
        for(term = num1; term <= num2; term++)
        {
            if(term % 7 == 0)
            {
                cout << term << " ";
            }
        }
    }
    else
    {
        for(term = num2; term <= num1; term++)
        {
            if(term % 7 == 0)
            {
                cout << term << " ";
            }
        }
    }

}
