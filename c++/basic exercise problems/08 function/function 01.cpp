#include <iostream>

using namespace std;

//prints any pyramid with number of rows and any character

void printTriangle(int numberOfRows, char characterToPrint, int option)
{
    int row, column, space;

    switch(option)
    {
    case 1:
        for(row = 0; row < numberOfRows; row++)
        {
            for(column = 0; column <= row; column++)
            {
                cout << characterToPrint;
            }

            cout << endl;
        }

        break;

    case 2:
        for(row = numberOfRows; row >= 1; row--)
        {
            for(column = 1; column <= row; column++)
            {
                cout << characterToPrint;
            }

            cout << endl;
        }

        break;

    case 3:
        space = 2 * numberOfRows - 2 ;

        for(row = 0; row < numberOfRows; row++)
        {
            for(column = 0; column < space; column++)
            {
                cout << " ";
            }

            space = space - 1;

            for(column = 0; column <= row; column++)
            {
                cout << characterToPrint << " ";
            }

            cout << endl;
        }

        break;

    default: cout << "Invalid selection";
    }
}


int main()
{
    int rows;
    char character;
    int userOption;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the character to print the triangle: ";
    cin >> character;

    cout << endl;

    cout << "1. Right Angled Triangle." << endl;
    cout << "2. Inverted Right Angled Triangle." << endl;
    cout << "3. Pyramid Shaped Triangle." << endl;

    cout << endl;

    cout << "Select which triangle to print (1-3): ";
    cin >> userOption;

    cout << endl;

    printTriangle(rows, character, userOption);

	return 0;
}
