//https://www.hackerrank.com/challenges/cut-the-sticks/problem
#include <bits/stdc++.h>

using namespace std;

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

vector<int> reverseArr(vector<int> A)
{
    vector<int> B;
    int aSize = A.size();
    
    for(int i = aSize - 1; i >= 0; i--)
    {
        B.push_back(A[i]);
    }
    
    return B;
    
}

// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) 
{
    vector<int> result;
    
    insertionSort(arr);
    reverse(arr.begin(), arr.end());
    
    int arrSize = arr.size(), lastElement;
    
    while(arrSize > 0)
    {   
        lastElement = arr[arrSize - 1];
        for(int i = arrSize - 1; i >= 0; i--)
        {
            arr[i] = arr[i] - lastElement;
        }
        result.push_back(arrSize);
        
        while(arrSize > 0 && !arr[arrSize - 1])
        {
            arrSize--;   
        }
    }

    return result;
}

int main()
{
    int n = 6;

    vector<int> arr{5, 4, 4, 2, 2, 8};

    vector<int> result = cutTheSticks(arr);

    for (int i = 0; i < result.size(); i++) 
	{
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

    return 0;
}