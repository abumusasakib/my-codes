#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int i, arraySize;

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
        cout << randomArray[i] << " ";
    }

    int searchArray, counter = 0;

    cout << endl;
    cout << "Enter the number to search in array: ";
    cin >> searchArray;

    for(i = 0; i < arraySize; i++)
    {
        if(randomArray[i] == searchArray)
        {
            counter++;

        }
    }

    int positionArray[counter];
    int j = 0;

    for(i = 0; i < arraySize; i++)
    {
        if(randomArray[i] == searchArray)
        {
            positionArray[j] = i;
            j++;
        }
    }


    if(counter == 0)
    {
        cout << "Not found";
    }

    else
    {
        cout << "Found at array indices: ";

        for(j = 0; j < counter; j++)
        {
            cout << positionArray[j] << " ";
        }

        cout << endl;
        cout << "Found " << counter << " times";
    }
}

//Note: As generated random numbers are unique, so each number can be found only once, otherwise the logic for counting number of times is correct
