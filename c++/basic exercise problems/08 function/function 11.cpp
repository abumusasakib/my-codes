#include <iostream>
using namespace std;

void minMaxAvg(float userArray[], int inputSize, float result[])
{
    float summation = 0.0, maximum = 0.0, minimum = 999999999, average = 0.0;

    for(int i = 0; i < inputSize; i++)
    {
        if(userArray[i] > maximum)
        {
            maximum = userArray[i];
        }

        if(userArray[i] < minimum)
        {
            minimum = userArray[i];
        }

        summation += userArray[i];
    }

    average = summation / inputSize;

    result[0] = minimum;
    result[1] = maximum;
    result[2] = average;
}

int main()
{
    int arraySize;

    cout << "How many numbers do you want to input? ";
    cin >> arraySize;

    cout << endl;
    
    float inputArray[arraySize];

    for(int i = 0; i < arraySize; i++)
    {
        cout << "Enter the values in the array: ";
        cin >> inputArray[i];
    }

    cout << endl;

    float output[3];

    minMaxAvg(inputArray, arraySize, output);

    cout << "Minimum value = " << output[0] << endl;
    cout << "Maximum value = " << output[1] << endl;
    cout << "Average value = " << output[2] << endl;

    return 0;
}
