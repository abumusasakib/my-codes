#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int i, arraySize, evenTerms = 0, oddTerms = 0;

    cout << "Input the size of the array: ";
    cin >> arraySize;

    int randomArray[arraySize];

    srand(time(0));

    for(i = 0; i < arraySize; i++)
    {
        randomArray[i] = rand();
    }

    for(i = 0; i < arraySize; i++)
    {
        if(randomArray[i] % 2 == 0)
        {
            evenTerms++;
        }

        else
        {
            oddTerms++;
        }
    }

    int evenArray[evenTerms];
    int oddArray[oddTerms];

    int j = 0, k = 0;

    for(i = 0; i < arraySize; i++)
    {

        if(randomArray[i] % 2 == 0)
        {
            evenArray[j] = randomArray[i];
            j++;
        }

        else
        {
            oddArray[k] = randomArray[i];
            k++;
        }
    }

    cout << "The generated random array is: ";

    for(i = 0; i < arraySize; i++)
    {
        cout << randomArray[i] << " ";
    }

    cout << endl;

    cout << "The even array is: ";

    for(j = 0; j < evenTerms; j++)
    {
        cout << evenArray[j] << " ";
    }

    cout << endl;

    cout << "The odd array is: ";

    for(k = 0; k < oddTerms; k++)
    {
        cout << oddArray[k] << " ";
    }
}
