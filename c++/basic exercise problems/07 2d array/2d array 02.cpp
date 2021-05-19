#include <iostream>

using namespace std;

int main()
{
	int i, j;
	int A[4][3];

	cout << "For Matrix A: " << endl;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << "Enter the element in " << i + 1 << " th row and " << j + 1 << " th column: ";
            cin >> A[i][j];
        }
    }

    int B[4][3];

	cout << "For Matrix B: " << endl;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << "Enter the element in " << i + 1 << " th row and " << j + 1 << " th column: ";
            cin >> B[i][j];
        }
    }

    int C[4][3];

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Matrix A is: " << endl;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << A[i][j] << "\t"; // \t is tab space (3 spaces)
        }
        cout << endl;
    }

    cout << endl;
    cout << "Matrix B is: " << endl;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << B[i][j] << "\t"; // \t is tab space (3 spaces)
        }
        cout << endl;
    }

    cout << endl;
    cout << "Subtracting A from B, we get the Matrix C: " << endl;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << C[i][j] << "\t"; // \t is tab space (3 spaces)
        }
        cout << endl;
    }
}
