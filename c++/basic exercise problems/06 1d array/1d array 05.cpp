#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int i, j, arraySize1, arraySize2;
    float swappingVariable;

    cout << "Input the size of the 1st array: ";
    cin >> arraySize1;

    float randomArray1[arraySize1];

    srand(time(0));

    float randomNumber = rand() % 10;

    for(i = 0; i < arraySize1; i++)
    {
        randomArray1[i] = (float(rand()) / float (RAND_MAX)) * randomNumber;
    }

    cout << "1st array before sorting in descending order is: " << endl;

    for(i = 0; i < arraySize1; i++)
    {
        cout << randomArray1[i] << " ";
    }

    for(i = 0; i < arraySize1; i++)
    {
        for(j = i + 1; j < arraySize1; j++)
        {
            if(randomArray1[i] < randomArray1[j]) //Descending order
            {
                swappingVariable = randomArray1[i];
                randomArray1[i] = randomArray1[j];
                randomArray1[j] = swappingVariable;
            }
        }
    }

    cout << endl;

    cout << "1st array after sorting in descending order is: " << endl;

    for(i = 0; i < arraySize1; i++)
    {
        cout << randomArray1[i] << " ";
    }

    cout << endl;

    cout << "Input the size of the 2nd array: ";
    cin >> arraySize2;

    float randomArray2[arraySize2];

    for(i = 0; i < arraySize2; i++)
    {
        randomArray2[i] = (float(rand()) / float (RAND_MAX)) * randomNumber;
    }

    cout << "2nd array before sorting in ascending order is: " << endl;

    for(i = 0; i < arraySize2; i++)
    {
        cout << randomArray2[i] << " ";
    }

    for(i = 0; i < arraySize2; i++)
    {
        for(j = i + 1; j < arraySize2; j++)
        {
            if(randomArray2[i] > randomArray2[j]) //Ascending order
            {
                swappingVariable = randomArray2[i];
                randomArray2[i] = randomArray2[j];
                randomArray2[j] = swappingVariable;
            }
        }
    }

    cout << endl;

    cout << "2nd array after sorting in ascending order is: " << endl;

    for(i = 0; i < arraySize2; i++)
    {
        cout << randomArray2[i] << " ";
    }
}
