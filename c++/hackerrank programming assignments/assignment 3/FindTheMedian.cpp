//https://www.hackerrank.com/challenges/find-the-median/problem
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

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

int findMedian(vector<int> arr)
{
    int i, key, j;
    insertionSort(arr);
    int median = 0;

    if(arr.size() % 2 == 0)
    {
        median = (arr[(arr.size()-1)/2] + arr[arr.size()/2]) / 2;
    }
    else
    {
        median = arr[arr.size()/2];
    }

    return median;

}

int main()
{
    int n = 7;

    vector<int> arr{0, 1, 2, 4, 6, 5, 3};

    int result = findMedian(arr);

    cout << result << "\n";

    return 0;
}
