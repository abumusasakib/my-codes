//https://www.hackerrank.com/challenges/electronics-shop/problem
#include <bits/stdc++.h>

using namespace std;

int maximum(int n1, int n2)
{
    if(n1 >= n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

int main()
{
    int s = 10, n = 2, m = 3, result = -1;
    int kb[n] = {3, 1}, pd[m] = {5, 2, 8};
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if (kb[i] + pd[j] <= s)
            {
                result = maximum(result, kb[i]+pd[j]);
            }
        }
    }  
    cout << result << endl;
    return 0;
}