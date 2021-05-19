#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int i, j, k;

	int A[4][3];

	srand(time(0));

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            A[i][j] = rand();
        }
    }

    int B[3][2];

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            B[i][j] = rand();
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

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cout << B[i][j] << "\t"; // \t is tab space (3 spaces)
        }
        cout << endl;
    }

    int C[4][2];

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 2; j++)
        {
            C[i][j] = 0;
        }
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 3; k++)
            {
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }


    cout << endl;
    cout << "The product of Matrix A and Matrix B, Matrix C is: " << endl;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cout << C[i][j] << "\t"; // \t is tab space (3 spaces)
        }

        cout << endl;
    }
}
