//https://www.hackerrank.com/challenges/tutorial-intro/problem
#include <bits/stdc++.h>

using namespace std;

int introTutorial(int V, vector<int> arr) 
{
    int arrSize = arr.size(), foundIndex;
    for(int i = 0; i < arrSize; i++)
    {
        if(arr[i] == V)
        {
            foundIndex = i;
        }
    }
    
    return foundIndex;
}

int main()
{
    int V = 4;
    int n = 6;

    vector<int> arr{1, 4, 5, 7, 9, 12};

    int result = introTutorial(V, arr);

    cout << result << "\n";

    return 0;
}