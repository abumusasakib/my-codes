//https://www.hackerrank.com/challenges/picking-numbers/problem
#include <bits/stdc++.h>

using namespace std;

int maximum(int num1, int num2)
{
    if(num1 >= num2)
    {
        return num1;
    }

    else
    {
        return num2;
    }
}

void insertionSort(vector<int>& A)
{
    int i, key, aSize = A.size();
    for(int j = 1; j < aSize; j++)
    {
        key = A[j];
        i = j - 1;

        while(i > -1 && A[i] > key)
        {
            A[i+1] = A[i];
            i=i-1;
        }

        A[i+1] = key;
    }
}

int pickingNumbers(vector<int> a)
{
    insertionSort(a);

    int difference, range,  ans = 0, aSize = a.size();

    for(int i = 0; i < aSize; i++)
    {
        for(int j = i; j < aSize; j++)
        {
            difference = a[j] - a[i];

            if(difference > 1)
            {
                break;
            }

            range = j-i+1;
            ans = maximum(ans, range);
        }
    }

    return ans;
}

int main()
{
    vector<int> a{4,6,5,3,3,1};

    int result = pickingNumbers(a);

    cout << result << "\n";

    return 0;
}
