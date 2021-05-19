//https://www.hackerrank.com/challenges/insertionsort1/problem
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

void insertionSort1(int n, vector<int> arr) 
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
            
            printArr(arr);
            cout << endl;
        }
        
        arr[i+1] = key;
    }
    printArr(arr);

}

int main()
{
    int n = 5;
    vector<int> arr{2, 4, 6, 8, 3};

    insertionSort1(n, arr);

    return 0;
}