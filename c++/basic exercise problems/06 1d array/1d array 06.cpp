#include <iostream>

using namespace std;

int main()
{

    int i, isAscending = 1, isDescending = 1;

    float intArray[10];

    for(i = 0; i < 10; i++)
    {
        cout << "Enter numbers in the first array: ";
        cin >> intArray[i];
    }

    i = 0;

    while((isAscending == 1 || isDescending == 1) && (i < 10 - 1))
    {
        if(intArray[i] < intArray[i + 1])
        {
            isDescending = 0;
        }

        else if(intArray[i] > intArray[i + 1])
        {
            isAscending = 0;
        }

        i++;
    }

    if(isAscending == 1)
    {
        cout << "The array is arranged in ascending order";
    }

    else if(isDescending == 1)
    {
        cout << "The array is arranged in descending order";
    }

    else
    {
        cout << "The array is not sorted";
    }
}