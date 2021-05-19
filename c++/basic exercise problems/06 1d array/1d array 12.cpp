#include <iostream>

using namespace std;

int main()
{
    int i, j, arraySize;

    cout << "Input the size of the array: ";
    cin >> arraySize;

    int inputArray[arraySize];

    for(i = 0; i < arraySize; i++)
    {
        cout << "Enter the elements in the array: ";
        cin >> inputArray[i];
    }

    cout << endl;

    int isCheckedArray[arraySize];

    for(i = 0; i < arraySize; i++)
    {
        isCheckedArray[i] = 0;
    }

    for(i = 0; i < arraySize; i++)
    {
        if(isCheckedArray[i] == 1)
        {
            continue;
        }

        int counter = 1;
        for(j = i + 1; j < arraySize; j++)
        {
            if(inputArray[i] == inputArray[j])
            {
                isCheckedArray[j] = 1;
                counter++;
            }
        }

        cout <<"The element " << inputArray[i] << " is found " << counter <<" times" << endl;
    }
}
