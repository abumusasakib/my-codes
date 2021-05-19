//https://www.hackerrank.com/challenges/insertionsort2/problem
#include <bits/stdc++.h>

using namespace std;

void printArr(vector<int> arr)
{
    int arrSize = arr.size();
    
    for(int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    
}

void insertionSort2(int n, vector<int> arr) 
{
    int i, key;
    for(int j = 1; j < n; j++)
    {
        key = arr[j];
        i = j - 1;
        
        while(i > -1 && arr[i] > key)
        {
            arr[i+1] = arr[i];
            i=i-1;
        }
        
        arr[i+1] = key;
        printArr(arr);
        cout << endl;
    }
}

int main()
{
    int n = 6;
    vector<int> arr{1, 4, 3, 5, 6, 2};

    insertionSort2(n, arr);

    return 0;
}