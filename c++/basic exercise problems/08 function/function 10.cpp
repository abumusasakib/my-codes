#include <iostream>
using namespace std;

void sortIntoAscendingorDescending(float userArray[], float arraySize, int option)
{
   int swappingVariable;

   switch(option)
   {
   case 1:
       for(int i = 0; i < arraySize; i++)
        {
            for(int j = i + 1; j < arraySize; j++)
            {
                if(userArray[i] > userArray[j])
                {
                    swappingVariable = userArray[i];
                    userArray[i] = userArray[j];
                    userArray[j] = swappingVariable;
                }
            }
        }

        cout << "Array in ascending order is: ";

        for(int i = 0; i < arraySize; i++)
        {
            cout << userArray[i] << " ";
        }

        break;

    case 2:
       for(int i = 0; i < arraySize; i++)
        {
            for(int j = i + 1; j < arraySize; j++)
            {
                if(userArray[i] < userArray[j])
                {
                    swappingVariable = userArray[i];
                    userArray[i] = userArray[j];
                    userArray[j] = swappingVariable;
                }
            }
        }


        cout << "Array in descending order is: ";

        for(int i = 0; i < arraySize; i++)
        {
            cout << userArray[i] << " ";
        }

        break;

    default: cout << "Invalid selection" << endl;
   }
}
int main()
{
    int inputSize;

    cout << "Enter the size of the array: ";
    cin >> inputSize;

    cout << endl;

    float inputArray[inputSize];

    for(int i = 0; i < inputSize; i++)
    {
        cout << "Enter values in the array: ";
        cin >> inputArray[i];
    }

    cout << endl;

    cout << "1. Ascending" << endl;
    cout << "2. Descending" << endl;

    int inputOption;

    cout << "Select how to sort the arrays (1-2): ";
    cin >> inputOption;

    cout << endl;

    sortIntoAscendingorDescending(inputArray, inputSize, inputOption);
}
