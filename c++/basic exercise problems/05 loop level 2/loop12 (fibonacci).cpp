#include <iostream>
using namespace std;

int main()
{
    int fib1 = 0;
    int fib2 = 1;
    int sumOfTerms, fibTerm, numberOfTerms;

    cout << "Enter number of terms: ";
    cin >> numberOfTerms;

    for(int i = 0; i < numberOfTerms; i++)
    {
        if(i == 0)
        {
            fibTerm = fib1;
        }
        else if(i == 1)
        {
            fibTerm = fib2;
        }
        else
        {
            sumOfTerms = fib1 + fib2;
            fibTerm = sumOfTerms;
            fib1 = fib2;
            fib2 = sumOfTerms;
        }

        cout << fibTerm << " ";
    }
}
