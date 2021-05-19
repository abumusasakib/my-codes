#include <iostream>
using namespace std;
int main()
{
    int arraySize;

    cout << "Enter size of the arrays: ";
    cin >> arraySize;

    cout << endl;

    int userArray[arraySize];

    for(int i = 0; i < arraySize; i++)
    {
        cout << "Enter numbers in the array: ";
        cin >> userArray[i];
    }

    cout << endl;

    cout << "Printing forwards: ";

    for(int i = 0; i < arraySize; i++)
    {
        cout << userArray[i] << " ";
    }

    cout << endl;

    cout << "Printing backwards: ";

    for(int i = arraySize - 1; i >= 0; i--)
    {
        cout << userArray[i] << " ";
    }
}
