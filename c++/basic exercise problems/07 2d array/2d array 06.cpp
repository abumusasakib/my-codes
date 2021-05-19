#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int row = 3, column = 3;
    float A[row][column];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            A[i][j] = (float(rand()) / float(RAND_MAX)) * rand();
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    float sum = 0, avg;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            sum = sum + A[i][j];
        }

        avg = sum / column;
        cout << "Average of " << i + 1 << "th column: " << avg << endl;

        sum = 0;
    }
}
