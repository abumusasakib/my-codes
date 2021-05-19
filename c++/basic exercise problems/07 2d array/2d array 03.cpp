#include <iostream>

using namespace std;

int main()
{
	int i, j;
	int row, column;

	cout << "Enter the size of row of Matrix A: ";
	cin >> row;

	cout << "Enter the size of column of Matrix A: ";
	cin >> column;

	int A[row][column];

	cout << "For Matrix A: " << endl;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            cout << "Enter the element in " << i + 1 << " th row and " << j + 1 << " th column: ";
            cin >> A[i][j];
        }
    }

    int B[column][row];

    for(i = 0; i < column; i++)
    {
        for(j = 0; j < row; j++)
        {
            B[i][j] = A[j][i];
        }
    }


    cout << "Matrix A is: " << endl;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            cout << A[i][j] << "\t"; // \t is tab space (3 spaces)
        }
        cout << endl;
    }

    cout << endl;
    cout << "Transpose of A in Matrix B is: " << endl;

    for(i = 0; i < column; i++)
    {
        for(j = 0; j < row; j++)
        {
            cout << B[i][j] << "\t"; // \t is tab space (3 spaces)
        }
        cout << endl;
    }
}
