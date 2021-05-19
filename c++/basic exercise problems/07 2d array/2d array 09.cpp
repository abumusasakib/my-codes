#include <iostream>

using namespace std;


int main()
{
    int A[5][5];
    int i, j, sumLeftDiag = 0, sumRightDiag = 0;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            cin >> A[i][j];
        }
    }


    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(i == j)
            {
                sumLeftDiag = sumLeftDiag + A[i][j];
            }

            if(i + j == 5 - 1)
            {
                sumRightDiag = sumRightDiag + A[i][j];
            }
        }
    }

    cout << "Sum of left diagonal = " << sumLeftDiag << endl;
    cout << "Sum of right diagonal = " << sumRightDiag << endl;

    return 0;
}

