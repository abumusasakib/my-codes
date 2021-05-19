#include <iostream>
using namespace std;

int main()
{
    int commonDifference = 0, term = 1, sum = 0;
    int numberOfTerms;

    cout << "Enter number of terms: ";
    cin >> numberOfTerms;

    for(int i = 1; i <= numberOfTerms; i++)
    {
        term = term + commonDifference;

        if(i < numberOfTerms)
        {
            cout << term << "+";
        }
        else
        {
            cout << term << "";
        }

        commonDifference++;

        sum = sum + term;
    }

    cout << "=" << sum;
}
