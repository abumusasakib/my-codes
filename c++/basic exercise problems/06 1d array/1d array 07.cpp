#include <iostream>
using namespace std;

int main()
{
    float max1, max2, min1, min2;

    float inputArray[11];

    for(int i = 0; i < 11; i++)
    {
        cout << "Enter values in the array: ";
        cin >> inputArray[i];
    }

    //finding 1st and 2nd maximum

    if(inputArray[0] < inputArray[1])
    {
        max1 = inputArray[1];
        max2 = inputArray[0];
    }
    else
    {
        max1 = inputArray[0];
        max2 = inputArray[1];
    }

    for (int i = 2; i < 11 ;i++)
    {
        if (inputArray[i] > max1)
        {
            max2 = max1;
            max1 = inputArray[i];
        }

        else if (inputArray[i] > max2 && inputArray[i] != max1)
        {
            max2 = inputArray[i];
        }
    }

    //finding 1st and 2nd minimum

    if(inputArray[0] < inputArray[1])
    {
        min1 = inputArray[0];
        min2 = inputArray[1];
    }
    else
    {
        min1 = inputArray[1];
        min2 = inputArray[0];
    }

    for(int i = 2; i < 11; i++)
    {
        if(inputArray[i] < min1)
        {
            min2 = min1;
            min1 = inputArray[i];
        }
        else if(inputArray[i] < min2 && inputArray[i] != min1)
        {
            min2 = inputArray[i];
        }
    }

    cout << "1st maximum = " << max1 << endl;
    cout << "2nd maximum = " << max2 << endl;
    cout << "1st minimum = " << min1 << endl;
    cout << "2nd minimum = " << min2 << endl;

    //sorting numbers in ascending order for finding median

   int swappingVariable;

   for(int i = 0; i < 11; i++)
    {
        for(int j = i + 1; j < 11; j++)
        {
            if(inputArray[i] > inputArray[j])
            {
                swappingVariable = inputArray[i];
                inputArray[i] = inputArray[j];
                inputArray[j] = swappingVariable;
            }
        }
    }

    cout << "Array in ascending order is: ";

    for(int i = 0; i < 11; i++)
    {
        cout << inputArray[i] << " ";
    }

    cout << endl;

    //finding median

    float median = 0;

    if(11 % 2 == 0)
    {
        median = (inputArray[(11-1)/2] + inputArray[11/2])/2.0;
    }
    else
    {
        median = inputArray[11/2];
    }

    cout << "The median is = " << median << endl;
}
