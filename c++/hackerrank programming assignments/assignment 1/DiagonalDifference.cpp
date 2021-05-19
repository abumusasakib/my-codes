//https://www.hackerrank.com/challenges/diagonal-difference/problem
#include <bits/stdc++.h>

using namespace std;


int diagonalDifference(vector<vector<int>> arr)
{
    int leftDiag = 0, rightDiag = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size(); j++)
        {
            if(i == j)
            {
                leftDiag = leftDiag + arr[i][j];
            }

            if (i + j == (arr.size() - 1))
            {
                rightDiag = rightDiag + arr[i][j];
            }

        }
    }

    int absDiff = abs(leftDiag - rightDiag);

    return absDiff;
}

int main()
{
 
    vector<vector<int>> arr{
                            {11, 2, 4},
                            {4, 5, 6},
                            {10, 8, -12}
                            };

 
    int result = diagonalDifference(arr);


    cout << result << "\n";

    return 0;
}

