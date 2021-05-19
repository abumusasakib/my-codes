//https://www.hackerrank.com/challenges/between-two-sets/problem
#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector<int> a, vector<int> b) 
{
    int sum = 0, aSize = a.size(), bSize = b.size();
    int isTrue;
    for(int num = 1; num <= 100; num++)
    {
        isTrue = 1;
        for(int i = 0; i < aSize; i++)
        {
            if(num % a[i] != 0)
            {
                isTrue = 0;
            }
        }
        
        for(int i = 0; i < bSize; i++)
        {
            if(b[i] % num != 0)
            {
                isTrue = 0;
            }
        }
        sum = sum + isTrue;
    }
    
    return sum;
}

int main()
{
    int n = 2;

    int m = 3;

    vector<int> aArr{2, 4};

    vector<int> bArr{16, 32, 96};

    int total = getTotalX(aArr, bArr);

    cout << total << "\n";

    return 0;
}