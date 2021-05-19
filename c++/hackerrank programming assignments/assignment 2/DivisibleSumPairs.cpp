//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) 
{
    int counter =0,sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                sum = ar[i]+ar[j];
                if(sum%k==0)
                {
                    counter++;     
                }
            }
        }
    }
    
    return counter;
}

int main()
{
    int n = 6;

    int k = 3;

    vector<int> ar{1, 3, 2, 6, 1, 2};

    int result = divisibleSumPairs(n, k, ar);

    cout << result << "\n";

    return 0;
}