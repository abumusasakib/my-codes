#include <iostream>
using namespace std;

int main()
{
    //finding sum of series 1-2+3-4...n
	int sumOfEvenTerms = 0, sumOfOddTerms = 0;
    int numberOfTerms;

    cout << "Enter number of terms: ";
    cin >> numberOfTerms;

    for(int term = 1; term <= numberOfTerms; term++)
    {
        if(term % 2 == 0)
        {
           sumOfEvenTerms = sumOfEvenTerms + term;

           if(term < numberOfTerms)
           {
               cout << term << "+";
           }
           else
           {
               cout << term << "";
           }
        }
        else
        {
           sumOfOddTerms = sumOfOddTerms + term;

           if(term < numberOfTerms)
           {
               cout << term << "-";
           }
           else
           {
               cout << term << "";
           }
        }
    }

    cout << "=" << sumOfOddTerms - sumOfEvenTerms;
}
